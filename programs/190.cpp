//Write a program to write a message "Welcome to my college" in a fiel named welcome.txt. Use open() function to open a file.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("Welcome.txt");
    out<<"Welcome to my college";
    out.close();
    cout<<"File has been created successfully........";
}