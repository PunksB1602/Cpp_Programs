//Write a program to define a class named Employee with its data members ID, name and salary.
//Read records of five employees and display the records in tabular form.
#include<iostream>
#include<iomanip>
using namespace std;
class Employee
{
    int ID;
    char name[30];
    float salary;
    public:
    void ReadData(int n)
    {
        cout<<"Enter ID,Name and Salary of employee#"<<n<<": ";
        cin>>ID>>name>>salary;
    }
    void DisplayData()
    {
        cout<<endl<<ID<<setw(10)<<name<<setw(10)<<salary;
    }
};
int main()
{
    Employee emp[5];
    int i;
    for(i=0;i<5;i++)
    emp[i].ReadData(i+1);
    cout<<endl<<"*******Records of Employee*******"<<endl;
    cout<<"ID"<<setw(10)<<"Name"<<setw(10)<<"Salary";
    for(i=0;i<5;i++)
    emp[i].DisplayData();
}