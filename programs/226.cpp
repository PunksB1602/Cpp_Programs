//Write a program to read content of a file and use exception handling if file doesn't exist.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char msg[]="No such file";
    char data;
    ifstream fin;
    try
    {
        fin.open("C:\\Users\\Pankaj\\OneDrive\\Desktop\\Pankaj\\1.cpp");
        if(fin.fail())
        throw msg;
        fin>>data;
        while(fin)
        {
            cout<<data;
            fin>>data;
        }
    }
    catch(char st[])
    {
        cout<<st;
    }
    fin.close();
    return 0;
}