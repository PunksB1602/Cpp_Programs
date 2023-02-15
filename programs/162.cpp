//Casting base class pointer to derived class pointer.
#include<iostream>
using namespace std;
class Base
{
    public:
    int b;
    void show()
    {
        cout<<"b= "<<b;
    }
};
class Derived:public Base
{
    public:
    int d;
    void show()
    {
        cout<<"b= "<<b<<"\td= "<<d;
    }
};
int main()
{
    Base *bptr;
    Base b;
    bptr=&b;
    bptr->b=100;
    cout<<"\nBase class bptr points to Base Class Object: ";
    bptr->show();
    Derived dr;
    bptr=&dr;
    bptr->b=200;
    cout<<"\nBase class pointer now points to derived objects";
    cout<<"\nbut it will call base class version function: ";
    bptr->show();
    Derived *dptr;
    dptr=&dr;
    cout<<"\n\nUsing Derived Class Pointer: ";
    dptr->d=300;
    dptr->show();
    cout<<"\n\nUsing Casting: ";
    ((Derived *)bptr)->d=400;
    ((Derived *)bptr)->show();
}