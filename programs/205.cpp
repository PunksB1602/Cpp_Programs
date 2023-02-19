//Write a program to combine two files into one and print it.
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    char fname[15],sname[15],cname[15],ch;
    cout<<"Enter first file: ";
    cin>>fname;
    cout<<"Enter second file: ";
    cin>>sname;
    cout<<"Enter new name for combined file: ";
    cin>>cname;
    ifstream ffile(fname);
    ifstream sfile(sname);
    fstream cfile(cname,ios::out);
    if(ffile.bad())
    {
        cout<<"Error in opening file..............";
        getch();
        exit(1);
    }
    if(sfile.bad())
    {
        cout<<"Error in opening second file...........";
        getch();
        exit(1);
    }
    ffile.get(ch);
    while(ffile.eof()==0)
    {
        cfile.put(ch);
        ffile.get(ch);
    }
    sfile.get(ch);
    while(sfile.eof()==0)
    {
        cfile.put(ch);
        sfile.get(ch);
    }
    cfile.close();
    cout<<fname<<"file has been merged into"<<sname;
    cout<<endl<<"The new content of file is: ";
    cfile.open(cname,ios::in);
    cfile.get(ch);
    while(cfile.eof()==0)
    {
        cfile.get(ch);
        cout<<ch;
    }
    ffile.close();
    sfile.close();
    cfile.close();
}