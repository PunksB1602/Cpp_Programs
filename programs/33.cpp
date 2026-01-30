//Write a program to find reverse of a string without using string related library fucntions.
#include<iostream>
using namespace std;
 int main()
 {
    char sto[20],str[20];
    int len,i=0,j=0;
    cout<<"Enter a string: ";
    cin>>sto;
    while(sto[i]!='\0')
    {i++;}
    len=i;
    for(i=len-1;i>=0;i--,j++)
    {str[j]=sto[i];}
    str[j]='\0';
    cout<<"The reversed string is: "<<str;
    return 0;
 }