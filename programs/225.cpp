//Write a program to use exception handling for array index out of size of the array 
#include<iostream>
using namespace std;
int main()
{
    char msg[]="Out of range";
    char myarray[10];
    try
    {
        for (int n=0;n<=10;n++)
        {
            if (n>9) throw msg;
            myarray[n]='z';
        }
    }
    catch (char str[])
    {
        cout<<"Exception: "<<str;
    }
}