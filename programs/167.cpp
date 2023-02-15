//Write a program to show execution order of destructors in child and base class in inheritance.
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    protected:
    char name[20];
    int age;
    public:
    Person()
    {
        strcpy(name,"");
        age=0;
    }
    Person (char nm[],int ag)
    {
        cout<<"I am from constructor in Person"<<endl;
        strcpy(name,nm);
        age=ag;
    }
    void DisplayPerson()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    ~Person()
    {
        cout<<"I am from destructor in Person"<<endl;
    }
};
class Student:public Person
{
    int roll;
    float marks;
    public:
    Student()
    {
        roll=0;
        marks=0;
    }
    Student(char nam[],int ag,int r,float m):Person(nam,ag)
    {
        cout<<"I am from constructor in Student"<<endl;
        roll=r;
        marks=m;
    }
    void DisplayStudent()
    {
        cout<<"Roll: "<<roll<<endl;
        cout<<"Total Marks: "<<marks<<endl;
    }
    ~Student()
    {
        cout<<"I am from destructor in Student"<<endl;
    }
};
class Employee:public Person
{
    char designation[20];
    float salary;
    public:
    Employee()
    {
        strcpy(designation,"");
        salary=0;
    }
    Employee(char nam[],int ag,char des[],float sal):Person(nam,ag)
    {
        cout<<"I am from constructor in Employee"<<endl;
        strcpy(designation,des);
        salary=sal;
    }
    void DisplayEmployee()
    {
        cout<<"Designation: "<<designation<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    ~Employee()
    {
        cout<<"I am from destructor in Employee"<<endl;
    }
};
int main()
{
    Student st("Shyam",14,101,89.5);
    Employee emp("Gita",34,"Engineer",50000);
    cout<<"***************Displaying Record******************\n";
    cout<<"The record of Student.........."<<endl;
    st.DisplayPerson();
    st.DisplayStudent();
    cout<<"The record of Employee.........."<<endl;
    emp.DisplayPerson();
    emp.DisplayEmployee();
    cout<<"*************************************************************"<<endl;
}