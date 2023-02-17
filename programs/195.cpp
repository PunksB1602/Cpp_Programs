//Write a program to copy the content of one file to another. Read name of source file and destination file from user.
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    char sName[15],dName[15],ch;
    cout<<"Enter Source File: ";
    cin>>sName;
    cout<<"Enter Destination File: ";
    cin>>dName;
    ifstream inFile(sName);
    ofstream outFile(dName);
    if(inFile.bad())
    {
        cout<<"Error in opening source file........";
        getch();
        exit(1);
    }
    inFile.get(ch);
    while(inFile.eof()==0)
    {
        outFile.put(ch);
        inFile.get(ch);
    }
    cout<<sName<<"file has been copied to "<<dName;
    getch();
}