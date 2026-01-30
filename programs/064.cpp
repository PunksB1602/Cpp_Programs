//Write a function that will evaluate a floating point number to be raised to an integer power i.e.y=m^n.
#include<iostream>
using namespace std;
float power(float,int);
int main()
{
    float m,y;
    int n;
    cout<<"Enter a floating point number and integral power it to be raised:\n ";
    cin>>m>>n;
    y=power(m,n);
    cout<<"The "<<m<<" raised to the power "<<n<<" is: "<<y;
    return 0;
}
float power(float m, int n)
{
    int i;
    float result=1;
    for(i=1;i<=n;i++)
    result*=m;
    return result;
}