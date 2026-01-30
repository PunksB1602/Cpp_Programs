//Write a function Add() which receives three numbers of type float and finds sum of these numbers.
//Use this function in main() function to calculate sum of three numbers read from user.
#include<iostream>
using namespace std;
float Add(float x, float y, float z)
{
    return(x+y+z);
}
int main()
{
    float a,b,c,sum;
    cout<<"Enter any three numbers: \n";
    cin>>a>>b>>c;
    sum=Add(a,b,c);
    cout<<"The sum of given three number is: "<<sum;
}