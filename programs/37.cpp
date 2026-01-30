//Write a program to use getline() function for reading two values in successive statements.
#include<iostream>
using namespace std;
int main()
{
    char FullName[20],Address[20];
    cout<<"Enter Name: ";
    cin.getline(FullName,20);
    cout<<"Enter Address: ";
    cin.getline(Address,20);
    cout<<"\nName: "<<FullName<<endl<<"Address: "<<Address;
    return 0;
}