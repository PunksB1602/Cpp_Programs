//Write a program to read the entire content of file. Use object of ifstream class to detect end of the file.
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
    while(fin)
    {
        cout<<data<<endl;
        fin>>data;
    }
    fin.close();
    getch();
    return 0;
}