//Define a function greater() to find the greatest number among two numbers. Write a program that uses this function to find
//greatest number among three numbers.
#include<iostream>
using namespace std;
int great(int x, int y)
{
    if(x>y)
    return (x);
    else
    return (y);
}
int main()
{
    int a,b,c,d,e;
    cout<<"Enter three numbers:\n";
    cin>>a>>b>>c;
    d=great(a,b);
    e=great(d,c);
    cout<<"The greatest number is :"<<e;
}