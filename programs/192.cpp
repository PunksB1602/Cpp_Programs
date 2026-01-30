//Write a program to read entire content of a file.Use eof() to detect the end of the file.
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(void)
{
    int data;
    ifstream fin;
    fin.open("marks.txt");
    fin>>data;
    while (fin.eof()==0)
    {
        cout<<data<<endl;
        fin>>data;
    }
    fin.close();
    getch();
    return 0;
}
