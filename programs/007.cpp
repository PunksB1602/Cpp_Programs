//Write a program to calculate area of circle. Use symbolic constant for valaue of PI.
#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
    float r,area;
    cout<<"Enter radius of circle:";
    cin>>r;
    area=PI*r*r;
    cout<<"The area of the circle is:"<<area;
    return 0;
}
