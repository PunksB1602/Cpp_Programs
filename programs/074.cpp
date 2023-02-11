//Create a structure named student that has name,roll, marks and remarks as memebers. Assume appropriate types and size of member.
//Write a program using structure to read and display the data entered by the user.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    struct student
    {
        char name[20];
        int roll;
        float marks;
        char remarks;
    };
    struct student s;
    cout<<"Enter name: ";
    cin>>s.name;
    cout<<endl<<"Enter roll: ";
    cin>>s.roll;
    cout<<endl<<"Enter marks: ";
    cin>>s.marks;
    cout<<endl<<"Enter remarks P for pass and F for fail: ";
    cin>>s.remarks;
    cout<<endl<<"The student's information is: ";
    cout<<endl<<"Name"<<setw(24)<<"Roll"<<setw(10)<<"Marks"<<setw(10)<<"Remarks";
    cout<<endl<<"------------------------------------------------------"<<endl;
    cout<<s.name<<setw(20)<<s.roll<<setw(9)<<s.marks<<setw(7)<<s.remarks;
}