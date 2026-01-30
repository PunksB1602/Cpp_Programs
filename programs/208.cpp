//Write a program to swap two numbers of integers types and float types using single function.Using function template.
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
template<class DataType>
void Swap(DataType *x,DataType *y)
{
    DataType temp;
    temp=*x;
    *x=*y;
}
int main()
{
    int a,b;
    float m,n;
    char p,q;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Enter two fractional numbers: ";
    cin>>m>>n;
    cout<<"Enter two characters: ";
    cin>>p>>q;
    cout<<"******The values of variables before function call*******";
    cout<<endl<<"Integers:a="<<a<<setw(6)<<"b="<<b;
    cout<<endl<<"Fractional Numbers:m="<<m<<setw(6)<<"n="<<n;
    cout<<endl<<"Characters:p="<<p<<setw(6)<<"q="<<q;
}