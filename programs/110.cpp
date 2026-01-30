//Write a program to use 'this' pointer to access data member in member function of a class.
#include<iostream>
using namespace std;
class Employee
{
    private:
    double salary;
    public:
    void getSalary(double salary)
    {
        this->salary=salary;
    }
    void Display()
    {
        cout<<"\nThe salary: "<<salary;
    }
};
int main()
{
    Employee programmer,manager;
    programmer.getSalary(40000.00);
    manager.getSalary(60000.00);
    programmer.Display();
    manager.Display();
    return 0;
}