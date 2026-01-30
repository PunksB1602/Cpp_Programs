//Write a program which has three user-defined functions named ReadData(), AddData() and DisplayData().
//Use ReadData() to read three floating point numbers from user, AddData() to find sum of these three numbers and DisplayData()
//to display sum(i.e. return value) in screen.
#include<iostream>
using namespace std;
float ReadData(float &x,float &y, float &z)
{
    cout<<"Enter any three floating numbers:\n";
    cin>>x>>y>>z;
    return (x,y,z);
}

float AddData(float x, float y, float z)
{
    float s;
    s=x+y+z;
    return s;
}
void DisplayData(float s)
{
    cout<<"The sum of these three numbers is: "<<s;
}
int main()
{
float a,b,c,nums,sum;
nums=ReadData(a,b,c);
sum=AddData(a,b,c);
DisplayData(sum);
}
