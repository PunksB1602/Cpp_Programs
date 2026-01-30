//Write a program to illustrate the use of reference variable in C++.
#include<iostream>
using namespace std;
int main()
{
    int x;
    int& ref=x;
    ref=100;
    cout<<"x="<<x<<"\t ref= "<<ref;
    return 0;
}