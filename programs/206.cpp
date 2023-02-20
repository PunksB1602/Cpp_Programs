//Write a program to add two integers and two fractional numbers separately.
#include<iostream>
#include<conio.h>
using namespace std;
int Add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
float Add(float a,float b)
{
    float c;
    c=a+b;
    return c;
}
int main()
{
    int iresult,a=10,b=30;
    float fresult,x=56.431233,y=65.784554;
    iresult=Add(a,b);
    fresult=Add(x,y);
    cout<<"Sum of two integers: "<<iresult;
    cout<<endl<<"Sum of two fractional numbers: "<<fresult;
    getch();
}