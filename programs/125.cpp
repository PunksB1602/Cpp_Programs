//Write a program to overload binary plus operator for concatenation of two strings.
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
    char st[30];
    public:
    String()
    {
        strcpy(st,"");
    }
    String(char data[])
    {
        strcpy(st,data);
    }
    void Display()
    {
        cout<<st;
    }
    String operator+(String str)
    {
        String temp;
        strcpy(temp.st,st);
        strcat(temp.st,str.st);
        return temp;
    }
};
int main()
{
    String S1("Welcome");
    String S2("to my college");
    String S3;
    S3=S1+S2;
    cout<<"S1=";S1.Display();
    cout<<"\nS2=";S2.Display();
    cout<<"\nS3=";S3.Display();
}