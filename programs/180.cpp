//Write a program to specify field width in output text as your choice using member function width() of ios class.
#include<iostream>
using namespace std;
int main()
{
    int num1=45;
    float n=56.123454;
    cout<<"num1=";
    cout.width(8);
    cout<<num1;
    cout<<endl<<"num2=";
    cout.width(20);
    cout<<n;
}