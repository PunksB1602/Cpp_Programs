//Write a program to illustrate the use of typeid and dynamic_cast operator.
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void Print()
    {
        cout<<"From Base Class"<<endl;
    }
};
class Derived:public Base
{
    public:
    void Print()
    {
        cout<<"From Derived Class"<<endl;
    }
};
int main()
{
    cout<<typeid(100).name()<<endl;
    cout<<typeid(100.1).name()<<endl;
    Base*b1=new Base();
    Base*d1=new Derived();
    Base*ptr1;
    ptr1=d1;
    cout<<typeid(*b1).name()<<endl;
    cout<<typeid(*d1).name()<<endl;
    cout<<typeid(*ptr1).name()<<endl;
    if(typeid(*ptr1)==typeid(Derived))
    {
        cout<<"Ptr has Derived object"<<endl;
    }
    Derived*ptr2=dynamic_cast<Derived*>(d1);
    if (ptr2)
    {
        cout<<"Ptr has Derived object"<<endl;
    }
}