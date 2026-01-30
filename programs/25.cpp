//Write a program to illustrate string initialzation.
#include<iostream>
using namespace std;
int main()
{
    char name[]="Pankaj Bhatt";
    int i=0;
    cout<<"The name in individual character form:"<<endl;
    while(name[i]!='\0')
    {
        cout<<" "<<name[i];
        i++;
    }
}