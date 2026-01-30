//Write a program to concatenate two strings.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char firstName[20]="Pankaj",lastName[]="Bhatt";
    strcat(firstName,lastName);
    cout<<endl<<"The full name is: "<<firstName;
    return 0;
}