//Write a program to illustrate strrev() function.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name1[15]="Pankaj Bhatt",name2[15];
    strcpy(name2,name1);
    strrev(name1);
    cout<<"The reversed string of original string "<<name2<<" is: "<<name1;
    return 0;
}