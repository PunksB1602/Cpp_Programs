//Write a program to display only three digits after decimal point in fractional number.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num=70.6776;
    cout<<"num with precision three= "<<setprecision(5) <<num<<endl;
    return 0;
}