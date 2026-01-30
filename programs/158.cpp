//Write a program to use Hierarchical Inheritance.
#include<iostream>
using namespace std;
class Person
{
    protected:
    char name[20];
    int age;
    public:
    void GetPerson()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void DisplayPerson()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student:public Person
{
    int roll;
    float marks;
    public:
    void GetStudent()
    {
        cout<<"Enter Roll: ";
        cin>>roll;
        cout<<"\nEnter total marks: ";
        cin>>marks;
    }
    void DisplayStudent()
    {
        cout<<"Roll: "<<roll<<endl;
        cout<<"Total Marks: "<<marks<<endl;
    }
};
class Employee:public Person
{
    char designation[20];
    float salary;
    public:
    void GetEmployee()
    {
        cout<<"Enter Designation: ";
        cin>>designation;
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void DisplayEmployee()
    {
        cout<<"Designation: "<<designation<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Student s1;
    cout<<"Reading information of Student"<<endl;
    s1.GetPerson();
    s1.GetStudent();
    Employee e1;
    cout<<"Reading information of Employee"<<endl;
    e1.GetPerson();
    e1.GetEmployee();
    cout<<"*********************************Displaying Record****************************************"<<endl;
    cout<<"The record of student..............."<<endl;
    s1.DisplayPerson();
    s1.DisplayStudent();
    cout<<"The record of Employee..............."<<endl;
    e1.DisplayPerson();
    e1.DisplayEmployee();
}