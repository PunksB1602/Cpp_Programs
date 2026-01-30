/*Write a menu driven program as following 
a=>add a new record
u=>update existing record
d=>display the content of file
s=>search record on the basis of rollno
x=>exit from the program*/
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Student
{
    private:
    char name[50];
    int rollno;
    float marks;
    char address[50];
    public:
    void ReadData()
    {
        cout<<endl<<"Name: ";
        cin>>name;
        cout<<"Roll No: ";
        cin>>rollno;
        cout<<"Marks: ";
        cin>>marks;
        cout<<"Address: ";
        cin>>address;
    }
    void DisplayData()
    {
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Roll No: "<<rollno;
        cout<<endl<<"Marks: "<<marks;
        cout<<endl<<"Address: "<<address; 
    }
    int GetRollNo()
    {
        return rollno;
    }
};
int main()
{
    Student st;
    char option,ch;
    int rn,isFound;
    fstream file;
    file.open("student.txt",ios::ate|ios::in|ios::out|ios::binary);
    do
    {
        cout<<"**********************Menu***********************";
        cout<<endl<<"Enter your option ";
        cout<<endl<<"a => add a new record";
        cout<<endl<<"u => update existing record";
        cout<<endl<<"d => display the content of file";
        cout<<endl<<"s => search record on the basis of rollno";
        cout<<endl<<"x => exit from the program"<<endl;
        cin>>option;
        switch(option)
        {
            case 'a':
            cout<<endl<<"Adding new record...............";
            st.ReadData();
            file.seekp(0,ios::end);
            file.write((char*)&st,sizeof(st));
            break;
            case 'u':
            int recordno=0;
            cout<<endl<<"File is being modified......";
            cout<<endl<<"Enter Roll Number to be updated: ";
            cin>>rn;
            isFound=0;
            file.seekg(0,ios::beg);
            file.read((char*)&st,sizeof(st));
            while(!file.eof())
            {
                recordno++;
                if(st.GetRollNo()==rn)
                {
                    cout<<endl<<"***The old record is:**********";
                    st.DisplayData();
                    isFound=1;
                    break;
                }
                file.read((char*)&st,sizeof(st));
            }
            if(isFound==0)
            {
                cout<<endl<<"*********Data Not Found*********";
                break;
            }
            file.clear();
            int location=(recordno-1)*sizeof(st);
            file.seekp(location,ios::beg);
            cout<<endl<<"Enter a new value to be updated: ";
            st.ReadData();
            file.write((char*)&st,sizeof(st));
            break;
            case 'd':
            cout<<endl<<"Content of file is: ";
            file.clear();
            file.seekg(0,ios::beg);
            while(file.read((char*)&st,sizeof(st))>0)
            {
                st.DisplayData();
                cout<<endl<<"*************************************";
            }
            file.clear();
            break;
            case 's':
            isFound=0;
            cout<<endl<<"Enter roll no to be searched.";
            cin>>rn;
            file.seekg(0,ios::beg);
            file.read((char*)&st,sizeof(st));
            while(!file.eof())
            {
                if(st.GetRollNo()==rn)
                {
                    cout<<endl<<"*****The searched data is:*********";
                    st.DisplayData();
                    isFound=1;
                    break;
                }
                file.read((char*)&st,sizeof(st));
            }
            file.clear();
            if(isFound==0)
            cout<<endl<<"********Data Not Found*********";
            file.close();
            break;
            case 'x':
            exit(0);
            break;
            default:
            cout<<"Invalid Options";
        }
        cout<<"\nDo you want to continue.........?Y?N";
        cin>>ch;
    }
    while(ch!='n');
}