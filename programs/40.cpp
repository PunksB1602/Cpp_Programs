//Write a program in C++ to read two numbers from user and display their product.
#include<iostream>
using namespace std;
int main()
{
    float a,b,p;
    cout<<"Enter any two numbers:\n";
    cin>>a>>b;
    p=a*b;
    cout<<"The product of "<<a<<" and "<<b<<" is: "<<p;
    return 0;
}