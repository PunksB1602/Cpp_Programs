//Write a program to use static data member in a class to count the number of times, a public member function is called.
#include<iostream>
using namespace std;
class Book
{
    private:
    static int cn;
    char name[15];
    int id;
    public:
    void ReadData()
    {
        cout<<endl<<"Enter ID: ";
        cin>>id;
        cout<<"Enter name of book: ";
        cin>>name;
        cn++;
    }
    void Display()
    {
        cout<<endl<<id<<"\t"<<name;
    }
    void DisplayCount()
    {
        cout<<"The number of objects which called ReadData():"<<cn;
    }
};
int Book::cn;
int main()
{
    Book b1,b2,b3;
    b1.ReadData();
    b1.DisplayCount();
    b2.ReadData();
    b2.DisplayCount();
    b3.ReadData();
    b3.DisplayCount();
    cout<<endl<<"ID\t"<<"Name: ";
    cout<<endl<<"___________________________";
    b1.Display();
    b2.Display();
    b3.Display();
}

