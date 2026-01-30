//Write a program to illustrate the use of seekp() and tellp() function.
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    int pos;
    ofstream out("marks.txt");
    pos=out.tellp();
    cout<<"The position of put pointer is: "<<pos;
    out.seekp(15,ios::beg);
    pos=out.tellp();
    cout<<endl<<"The position of put pointer is: "<<pos;
    out.seekp(10,ios::cur);
    pos=out.tellp();
    cout<<endl<<"Again, the position of put pointer is: "<<pos;
    getch();
}