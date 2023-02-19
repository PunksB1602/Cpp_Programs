//Write a program to count number of vowels and consonants in a text file.
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    char filename[15],ch;
    int nvowel=0,ncon=0;
    cout<<"Enter file name: ";
    cin>>filename;
    ifstream inFile(filename);
    if(inFile.bad())
    {
        cout<<"Error in opening file..........";
        getch();
        exit(1);
    }
    cout<<"The content from the file "<<filename<<" is: "<<endl;
    while(inFile.eof()==0)
    {
        inFile.get(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')nvowel++;
        else
        ncon++;
    }
    cout<<endl<<"The number of vowel: "<<nvowel;
    cout<<endl<<"The consonants: "<<ncon;
    getch();
}