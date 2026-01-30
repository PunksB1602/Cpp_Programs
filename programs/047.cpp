//Write a program to read your full name(i.e. string with blank space) and display in screen.
#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter your full name: ";
    cin.get(str,50);
    cout<<"Your entered name is: "<<str;
    return 0;
}
