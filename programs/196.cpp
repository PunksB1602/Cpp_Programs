//Write a program to create a class named Student with data memebers: name,rollno and percent.. Read record of a student using object of the class
//and write information to a file named student.txt.
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class Student
{
    private:
    char name[50];
    int rollno;
    float percent;
    public:
    void ReadData()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll no: ";
        cin>>rollno;
        cout<<"Enter percentage: ";
        cin>>percent;
    }
};
int main()
{
    Student st;
    st.ReadData();
    ofstream fout("student.txt");
    fout.write((char*)&st,sizeof(st));
    cout<<"\nFile has been created successfully...see student.txt file";
    getch();
}
