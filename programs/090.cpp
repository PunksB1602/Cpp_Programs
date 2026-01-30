//Define a class Birthday with members:day,month & year.Use object of this class as member of another class Employee to read &
//display name and date of birth of an employee.
#include<iostream>
using namespace std;
class Birthday
{
    int day;
    int month;
    int year;
    public:
    void GetBirthday();
    void DisplayBirthday();
};
void Birthday::GetBirthday()
{
    cout<<"Enter Day: ";
    cin>>day;
    cout<<"Enter Month: ";
    cin>>month;
    cout<<"Enter Year: ";
    cin>>year;
}
void Birthday::DisplayBirthday()
{
    cout<<year<<"/";
    cout<<month<<"/";
    cout<<day<<endl;
}
class Employee
{
    char name[20];
    Birthday DOB;
    public:
    void GetPerson();
    void DisplayPerson();
};
void Employee::GetPerson()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Date of Birth: "<<endl;
    DOB.GetBirthday();
}
void Employee::DisplayPerson()
{
    cout<<endl<<"___________________________________________________________________________"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Date of Birth: ";
    DOB.DisplayBirthday();
}
int main()
{
    Employee emp;
    cout<<"Enter information of an employee: "<<endl;
    emp.GetPerson();
    cout<<"Your entered information: "<<endl;
    emp.DisplayPerson();
}