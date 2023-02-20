//Write a program to add two integers and two fractional numbers using single function.{i.e. Use function template)
#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
T Add(T a,T b)
{
    return (a+b);
}
int main()
{
    int iresult,a=10,b=30;
    float fresult,x=56.431233,y=65.785489;
    iresult=Add(a,b);
    fresult=Add(x,y);
    cout<<"Sum of two integers: "<<iresult;
    cout<<endl<<"Sum of two fractional numbers: "<<fresult;
    getch();
}
