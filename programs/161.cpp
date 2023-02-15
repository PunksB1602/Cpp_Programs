//Write a program to illustrate the use of funtion overriding.
#include<iostream>
using namespace std;
class Person
{
    protected:
    char Name[20];
    public:
    void Read()
    {
        cout<<"Enter Name of Person: ";
        cin>>Name;
    }
    void Display()
    {
        cout<<"Name: "<<Name<<endl;
    }
};
class Student:public Person
{
    int Roll;
    public:
    void Read()
    {
        cout<<"Enter Roll of Student: ";
        cin>>Roll;
    }
    void Display()
    {
        cout<<"Roll No.: "<<Roll<<endl;
    }
};
int main()
{
    Student st;
    st.Person::Read();
    st.Read();
    cout<<"***********************Your Records***************************"<<endl;
    st.Person::Display();
    st.Display();
}