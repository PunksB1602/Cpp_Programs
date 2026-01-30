//Write a program to illustrate the use of tellg() and seekg() function
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    int pos;
    ifstream in("marks.txt");
    pos=in.tellg();
    cout<<"The position of get pointer:  "<<pos;
    in.seekg(10,ios::beg);
    pos=in.tellg();
    cout<<endl<<"The position of get pointer is: "<<pos;
    getch();
}