//Write a program to compute combination of numbers nCr without using function.
#include<iostream>
using namespace std;
int main()
{
    long f1=1,f2=1,f3=1,comb;
    int n,c,r,i;
    cout<<"Enter n and r!!: ";
    cin>>n>>r;
    for(i=1;i<=n;i++)
    f1*=i;
    for(i=1;i<=(n-r);i++)
    f2*=i;
    for(i=1;i<=r;i++)
    f3*=i;
    comb=f1/(f2*f3);
    cout<<"The combination is: "<<comb;
    return 0;
}