//Write a program to copy one string to another.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[]="Pankaj Bhatt",s[15];
    strcpy(s,name);
    cout<<"The original string is: "<<name;
    cout<<endl<<"The copied string is: "<<s;
    return 0;
}