//Write a program which has two classes, one friend of another.
#include<iostream>
using namespace std;
class XYZ
{
    float a,b;
    public:
    void Read()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    friend class ABC;
};
class ABC
{
    public:
    void Display(XYZ x)
    {
        cout<<"\nThe first number is: "<<x.a;
        cout<<"\nThe second number is: "<<x.b;
    }
    float sum(XYZ x)
    {
        float s;
        s=x.a+x.b;
        return s;
    }
};
int main()
{
    XYZ x;
    ABC a;
    x.Read();
    a.Display(x);
    cout<<"\nThe sum is: "<<a.sum(x);
}