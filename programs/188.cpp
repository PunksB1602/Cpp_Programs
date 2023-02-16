//Write a program to read name,roll no and marks in five subjects of a student and store the information in a file named marks.txt.
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    char name[50];
    int rollno,phy,chem,math,bio,eng;
    ofstream wr("marks.txt");
    cout<<endl<<"Enter Name of Student: ";
    cin>>name;
    cout<<"Enter RollNo of the student: ";
    cin>>rollno;
    cout<<"Enter marks in five subjects in order: ";
    cout<<endl<<"Physics,Chemistry,Mathematics,Biology & English: ";
    cin>>phy>>chem>>math>>bio>>eng;
    cout<<"Writing to a file.............";
    wr<<name<<endl<<rollno<<endl;
    wr<<phy<<endl<<chem<<endl<<math<<endl<<bio<<endl<<eng;
    wr.close();
    getch();
}
