//Write a program to calculate combination using function.
#include<iostream>
using namespace std;
long factorial(int n)
{
    long fact=1;
    int i;
    for(i=1;i<=n;i++)
    fact*=i;
    return fact;
}
int main()
{
    long f1=1,f2=1,f3=1,comb;
    int n,c,r;
    cout<<"Enter n and r!!: ";
    cin>>n>>r;
    f1=factorial(n);
    f2=factorial(n-r);
    f3=factorial(r);
    comb=f1/(f2*f3);
    cout<<"The combination is: "<<comb;
    return 0;
}
