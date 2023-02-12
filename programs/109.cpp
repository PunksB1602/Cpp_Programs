//Write a program to use this pointer in member function of a class.
#include<iostream>
using namespace std;
class Employee
{
    private:
    double salary;
    public:
    void getSalary(double sal)
    {
        salary=sal;
    }
    void Display()
    {
        cout<<"\nThe salary: "<<salary;
    }
};
int main()
{
    Employee programmer;
    Employee manager;
    manager.getSalary(60000.00);
    programmer.getSalary(40000.00);
    manager.Display();
    programmer.Display();
}