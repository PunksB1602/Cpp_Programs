//Write a program to write a message "Welcome to my college" in a file named welcome.txt.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("Welcome.txt");
    out<<"Welcome to my college ";
    out.close();
    cout<<"File has been created successfully.......";
}