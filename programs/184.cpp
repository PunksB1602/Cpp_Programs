//Write a program to use different flags for formatting output text.
#include<iostream>
using namespace std;
int main()
{
    int num=45;
    cout.fill('*');
    cout<<"The Output in Right Justified......"<<endl;
    cout.setf(ios::right,ios::adjustfield);
    cout.width(30);
    cout<<"Hari Krishna Joshi";
    cout<<endl<<"The Output in Left Justified....."<<endl;
    cout.setf(ios::left,ios::adjustfield);
    cout.width(30);
    cout<<"Hari Krishna Joshi";
    cout<<endl<<"The number in octal: ";
    cout.setf(ios::oct,ios::basefield);
    cout<<num;
}