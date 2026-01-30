//Write a program to read record of ten books with appropriate attributes from user and write to a file.
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class Book
{
    int ID;
    char name[10];
    int nop;
    float price;
    public:
    void ReadData()
    {
        cout<<"Enter ID: ";
        cin>>ID;
        cout<<"Enter Name of book: ";
        cin>>name;
        cout<<"Enter number of pages: ";
        cin>>nop;
        cout<<"Enter price of the book: ";
        cin>>price;
    }
    void DisplayData()
    {
        cout<<endl<<"ID: "<<ID;
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"No of pages: "<<nop;
        cout<<endl<<"Price: "<<price; 
    }
};
int main()
{
    Book b[10],ob;
    int i;
    cout<<"Reading records of book............."<<endl;
    for(i=0;i<10;i++)
    b[i].ReadData();
    fstream file("book.txt",ios::out|ios::binary);
    for(i=0;i<10;i++)
    file.write((char*)&b[i],sizeof(b[i]));
    cout<<"Data has been written in file............";
    file.close();
    getch();
}