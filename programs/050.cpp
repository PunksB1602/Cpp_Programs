//Write a program in C++ to read some number of lines of text until user enters
//'*' character and display the entered text in screen.
#include<iostream>
using namespace std;
int main()
{
char str[1000];
cout<<"Enter some text(use * to stop reading): ";
cin.getline(str,1000,'*');
cout<<"The entered string is:\n"<<str;
return 0;
}