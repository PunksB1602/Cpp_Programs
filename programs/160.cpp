//Write a program as your choice to use Hybrid Inheritance.
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
class Student: public Person
{
    int roll;
    public:
    void GetStudent()
    {
        cout<<"Enter Roll: ";
        cin>>roll;
    }
    void DisplayStudent()
    {
        cout<<"Roll: "<<roll<<endl;
    }
};
class Employee: public Person{
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
class Examination:public Student
{
    protected:
    float Theory_Marks,Lab_Marks;
    public:
    void GetMarksInSubjects()
    {
        cout<<"Enter Marks of Student in Theory Exam: ";
        cin>>Theory_Marks;
        cout<<"Enter Marks of Student in Lab Exam: ";
        cin>>Lab_Marks;
    }
    void  DisplayMarks()
    {
        cout<<"Marks in Theory Exam: "<<Theory_Marks<<endl;
        cout<<"Marks in Lab Exam: "<<Lab_Marks<<endl;
    }
};
class Result:public Examination
{
    private:
    float total_marks;
    public:
    void CalculateTotalMarks()
    {
        total_marks=Theory_Marks+Lab_Marks;
    }
    void DisplayResult()
    {
        cout<<"Total Marks: "<<total_marks<<endl;
        if (total_marks>32)
        cout<<"Congratulation!!!!!"<<endl;
        else
        cout<<"Sorry!!try again"<<endl;
    }
};
int main()
{
    Result rs;
    cout<<"Reading information of Student"<<endl;
    rs.GetPerson();
    rs.GetStudent();
    rs.GetMarksInSubjects();
    Employee emp;
    cout<<"Reading information of Employee"<<endl;
    emp.GetPerson();
    emp.GetEmployee();
    cout<<endl<<"**************Displaying Record*****************"<<endl;
    cout<<"The record of Student........."<<endl;
    rs.DisplayPerson();
    rs.DisplayStudent();
    rs.CalculateTotalMarks();
    rs.DisplayMarks();
    rs.DisplayResult();
    cout<<"****************************************************"<<endl;
    cout<<"The record of Employee is: "<<endl;
    emp.DisplayPerson();
    emp.DisplayEmployee();
}