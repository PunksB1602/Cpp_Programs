//Write a program to read name,roll no and marks in five subjects from a file named marks.txt. Assume the data file marks.txt
//already exists with data.
#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    char name[50];
    int rollno,phy,chem,math,bio,eng,total;
    float per;
    ifstream rd("marks.txt");
    cout<<"Reading data from file.......";
    rd>>name>>rollno;
    rd>>phy>>chem>>math>>bio>>eng;
    cout<<endl<<"************************************";
    cout<<endl<<"         Marksheet         ";
    cout<<endl<<"Name: "<<name;
    cout<<endl<<"Roll no: "<<rollno;
    cout<<endl<<setw(12)<<"Subject"<<setw(8)<<"Roll";
    cout<<endl<<"----------------  ---------------";
    cout<<endl<<setw(12)<<"Physics"<<setw(8)<<phy;
    cout<<endl<<setw(12)<<"Chemistry"<<setw(8)<<chem;
    cout<<endl<<setw(12)<<"Math"<<setw(8)<<math;
    cout<<endl<<setw(12)<<"Biology"<<setw(8)<<bio;
    cout<<endl<<setw(12)<<"English"<<setw(8)<<eng;
    total=phy+chem+math+bio+eng;
    per=total/5;
    cout<<endl<<"----------------------------";
    cout<<endl<<"Total: "<<total<<setprecision(4);
    cout<<endl<<"Percentage: "<<per;
    rd.close();
    getch();
}
