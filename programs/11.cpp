//Write a program to cast integer value to float.
#include<iostream>
using namespace std;
int main()
{
    int num=123;
    float f1,f2,f3;
    f1=num/12;
    f2=float(num)/12;
    f3=(float(num))/12;
    cout<<"Without casting,value: "<<f1;
    cout<<endl<<"With casting in functional notation: "<<f2;
    cout<<endl<<"With casting in C-like notation: "<<f3;
    return 0;
}