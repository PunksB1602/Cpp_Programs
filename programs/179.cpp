//Write a program in C++ to generate following pattern
//W
//We
//Wel
//Welc
//Welco
//Welcom
//Welcome
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char txt[]="Welcome";
    int n=strlen(txt);
    for (int i=1;i<=n;i++)
    {
        cout.write(txt,i);
        cout<<endl;
    }
}