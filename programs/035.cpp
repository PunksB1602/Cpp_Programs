//Write a program to read multiple lines of string from user and display on screen.
#include<iostream>
using namespace std;
int main()
{
    char st[100];
    cout<<"Enter a string(use # to stop reading): ";
    cin.getline(st,100,'#');
    cout<<"Your entered string is: "<<st;
    return 0;
} 