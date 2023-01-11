//Write a program to copy content of one string to another without using string related library functions.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char st1[20],st2[20],len,i=1;
    cout<<"Enter a string: ";
    cin>>st1;
    while(st1[i]!='\0')
    {i++;}
    len=i;
    for(i=0;i<len;i++)
    {st2[i]=st1[i];}
    st2[i]='\0';
    cout<<"The original strig is: "<<st1;
    cout<<endl<<"The copied sting is: "<<st2;
    return 0;
}