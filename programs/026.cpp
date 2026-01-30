//Write a program to find out length of string input from user using library.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[10];
    int len;
    cout<<"Enter your name: ";
    cin>>name;
    len=strlen(name);
    cout<<"The number of characters in your name is: "<<len;
    return 0;
}
