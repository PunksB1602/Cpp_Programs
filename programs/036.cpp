//Write a program to illustrate the effect of get() function for reading two values in successive statements.
#include<iostream>
using namespace std;
int main()
{
    char FullName[20],Address[20];
    cout<<"Enter name: ";
    cin.get(FullName,20);
    cout<<"Enter Address: ";
    cin.get(Address,20);
    cout<<"\nName= "<<FullName<<"\nAddress: "<<Address;
    return 0;
}