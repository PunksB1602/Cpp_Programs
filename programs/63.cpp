//Write a function named factorial(x) which accepts an int x and returns long value.
//Write a program to calculate permutation of numbers i.e. nPr using above function factorial().
#include<iostream>
using namespace std;
long factorial(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}
int main()
{
    long f1,f2,perm;
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    f1=factorial(n);
    f2=factorial(n-r);
    perm=f1/f2;
    cout<<"\n The permutation value is: "<<perm;
}