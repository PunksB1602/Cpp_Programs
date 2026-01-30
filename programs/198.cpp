//Write a program to write an object of a class to a file and read information from the file using another object of the same class 
//to display the record in the screen.
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
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll no: ";
        cin>>rollno;
        cout<<"Percentage: ";
        cin>>percent;
    }
    void DisplayData()
    {
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Roll no: "<<rollno;
        cout<<endl<<"Percentage: "<<percent;
    }
};
int main()
{
    Student str,stw;
    fstream inout("student.txt",ios::in|ios::out);
    stw.ReadData();
    inout.write((char*)&stw,sizeof(stw));
    cout<<"*********************************";
    cout<<endl<<"The data from file is: ";
    inout.seekg(0,ios::beg);
    inout.read((char*)&str,sizeof(str));
    str.DisplayData();
    getch();
}