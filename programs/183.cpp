//Write a program to use fill() function '*' character in output when number of characters is less than actual specified field width.
#include<iostream>
using namespace std;
int main()
{
    int num1=45;
    float n=56.123454;
    cout.fill('*');
    cout<<"num1=";
    cout.width(8);
    cout<<num1;
    cout<<endl<<"num2=";
    cout.width(20);
    cout<<n;
}