//Write a program to read a file name from user an read its content using get() function.
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    char filename[12],ch;
    cout<<"Enter file name: ";
    cin>>filename;
    ifstream inFile(filename);
    if(inFile.bad())
    {
        cout<<"Error in opening file...........";
        getch();
        exit(1);
    }
    cout<<"The content from the file "<<filename<<" is: "<<endl;
    while(inFile.eof()==0)
    {
        inFile.get(ch);
        cout<<ch;
    }
    getch();
}