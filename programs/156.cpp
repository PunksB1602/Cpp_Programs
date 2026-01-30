//Create a class named Person which has name & age as data members and appropriate function members to read and display its data.
//Create another class Employee derived from class Person to use features of base class.[Single Inheritance]
#include<iostream>
using namespace std;
class Person
{
    protected:
    char name[20];
    int age;
    public:
    void ReadPersonData()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void DisplayPersonData()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Employee:public Person
{
    private:
    char designation[20];
    float salary;
    public:
    void ReadEmployeeData()
    {
        ReadPersonData();
        cout<<"Enter Designation: ";
        cin>>designation;
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void DisplayEmpoyeeData()
    {
        cout<<"\nThe record of Employee is: ";
        DisplayPersonData();
        cout<<"Designation: "<<designation<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee emp;
    emp.ReadEmployeeData();
    emp.DisplayEmpoyeeData();
}