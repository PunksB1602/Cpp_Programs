//Write a C++ program to find the sum of the digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int num,p,q,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    do
    {
       p=num/10;
       q=num%10;
       num=p;
       sum=sum+q;
    } while (p!=0);
    cout<<"The sum of digits is: "<<sum;
    return 0;
}