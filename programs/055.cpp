//Write a program to swap the values of two variables using call by reference.
#include<iostream>
using namespace std;
void increase(float &x)
{
    x=x+100;
}
int main()
{
    float a;
    a=300.5;
    cout<<"Value of a before function call: "<<a;
    increase(a);
    cout<<"\n Value of a after function call: "<<a;
}