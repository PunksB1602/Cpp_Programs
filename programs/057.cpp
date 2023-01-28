//Write a program which has two functions with same name and same number of arguments, one for addition of two integers
//and other for addition of two double values.
#include<iostream>
using namespace std;
int add(int, int);
double add(double, double);
int main()
{
    int r1;
    double r2;
    r1=add(10,30);
    r2=add(10.56, 6.43);
    cout<<"Sum of integer values="<<r1;
    cout<<endl<<"Sum of double values="<<r2;
}
int add(int a , int b)
{
    return(a+b);
}
double add(double a, double b)
{
    return(a+b);
}