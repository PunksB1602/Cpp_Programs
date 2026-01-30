//Write a program to illustrate the use of strcmp() function.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name1[15],name2[15];
    int diff;
    cout<<"Enter first string: ";
    cin>>name1;
    cout<<endl<<"Enter second string: ";
    cin>>name2;
    diff=strcmp(name1,name2);
    if(diff>0)
    cout<<name1<<" is greater than "<<name2<<" by value "<<diff;
    else if(diff<0)
    cout<<name2<<" is greater than "<<name1<<" by value "<<diff;
    else
    cout<<name1<<" is same as "<<name2;
    return 0;
}