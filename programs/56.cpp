//Write a program which has two functions with same name, one for addition of two integers and other for addition of three integers.
#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
int main()
{
    int r1,r2;
    r1=add(10,30);
    r2=add(20,30,40);
    cout<<"Result1= "<<r1<<endl<<"Result2= "<<r2;
}
int add(int a, int b)
{
    return(a+b);
}
int add(int a, int b ,int c)
{
    return(a+b+c);
}