//Write a program to create manipulator equivalent to '\t'.Use it in the program and format the output.
#include<iostream>
#include<iomanip>
using namespace std;
ostream & tab (ostream & o)
{
    o<<"\t";
    return o;
}
int main()
{
    int num1=23,num2=56,num3=90;
    cout<<num1<<tab<<num2<<tab<<num3;
}