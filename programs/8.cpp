// Write a program to calculate area of circle. Define constant for value of PI using keyword const.
#include<iostream>
using namespace std;
int main()
{
    float r,area;
    const float PI=3.14;
    cout<<"Enter radius of circle:";
    cin>>r;
    area=PI*r*r;
    cout<<"The area of the circle is:"<<area;
    return 0;
}