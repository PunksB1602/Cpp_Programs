//Write a program to illustrate the use of fail() function
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
int main()
{
    int pos;
   std:: ifstream out("ttt.txt");
    if(out.fail())
    {
       std:: cout<<"Error while opening file........";
        getch();
        exit(1);
    }
    std::cout<<"File has been opened succsessfully....";
    getch();
}
