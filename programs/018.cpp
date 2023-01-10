//Write a program to use setw() manipulator for formatting output.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num1=12345, num2=2356;
    cout<<endl<<"num1="<<setw(20)<<num1<<endl<<"num2="<<setw(8)<<num2;
    return 0;
}