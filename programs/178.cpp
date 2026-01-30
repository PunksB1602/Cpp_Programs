//Write a program to read multi-word input from user using getline() function.
#include<iostream>
using namespace std;
int main()
{
    int size=15;
    char name1[20],name2[20];
    cout<<endl<<"Enter Full name of first student: ";
    cin.getline(name1,size);
    cout<<"\nEnter Full name of second student: ";
    cin.getline(name2,size);
    cout<<endl<<"*******************************************";
    cout<<endl<<name1<<endl<<name2;
}