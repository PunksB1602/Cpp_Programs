//Write a program to illustrate function call by value.
#include<iostream>
using namespace std;
void swap(int, int);
int main()
{
    int a,b;
    a=89;b=99;
    cout<<"Before function calling, a and b are: "<<a<<" "<<b;
    swap(a,b);
}
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<endl<<"The values within functions are: "<<x<<" "<<y;
}