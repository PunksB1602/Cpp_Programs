//Write a program to calculate simple interest from P,T and R.
#include<iostream>
using namespace std;
inline float interest(float P, float T, float R)
{
    return ((P*T*R)/100);
}
int main()
{
    float result;
    result=interest(12000,2,10);
    cout<<"The interest is "<<result;
}