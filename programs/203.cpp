//Write a program that writes the 10 records of Book into file "books.txt" then display only the 4th record stored in that file.
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
        cout<<endl<<"Number of pages: "<<nop;
        cout<<endl<<"Price: "<<price;
    }
};
int main()
{
    Book b[10],ob;
    int i;
    cout<<"Reading records of book..........";
    for(i=0;i<10;i++)
    b[i].ReadData();
    fstream
    file("books.txt",ios::ate|ios::in|ios::out|ios::binary);
    for(i=0;i<10,i++)
    file.write((char*)&b[i],sizeof(b(i)));
    cout<<endl<<"The fourth record is: ";
    file.clear();
    file.seekg(0,ios::beg);
    i=0;
    while(file.read((char*)&ob,sizeof(ob))>0)
    {
        i++;
        if(i==4)
        {
            ob.DisplayData();
            break;
        };
    }
    file.close();
    getch();
}