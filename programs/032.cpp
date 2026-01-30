//Write a program to concatenate two strings without using string related library functions.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char st1[20],st2[20];
    int len1,len2,i=0,j=0;
    cout<<"Enter first string: ";
    cin>>st1;
    cout<<"Enter second string: ";
    cin>>st2;
    while(st1[i]!='\0')
    {i++;}
    len1=i;
    i=0;
    while(st2[i]!='\0')
    {i++;}
    i=0;
    while(st2[i]!='\0')
    {i++;}
    len2=i;
    for(i=len1;i<(len1+len2);i++,j++)
    {st1[i]=st2[j];}
    st1[i]='\0';
    cout<<"The concatenated string is: "<<st1;
}