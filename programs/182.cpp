//Write a program to display only two digits after decimal point in float value.
#include<iostream>
using namespace std;
int main()
{
    float num=45.678,n=45.5423;
    cout.precision(4);
    cout<<"num="<<num;
    cout<<endl<<"n="<<n;
}