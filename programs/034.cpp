//Write a program to read string with space(i.e. multiple word) from user and display it on screen.
#include<iostream>
using namespace std;
int main()
{
    char st[30];
    cout<<"Enter a string: ";
    cin.get (st,20);
    cout<<"Your entered string is: "<<st;
    return 0;
}