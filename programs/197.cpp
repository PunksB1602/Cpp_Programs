//Write a program to read student's record from the file created in above program and display in screen.
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class Student
{
    private:
    char name[50];
    int rollno;
    float percent;
    public:
    void DisplaYData()
    {
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Roll no: "<<rollno;
        cout<<endl<<"Percentage: "<<percent;
    }
};
int main()
{
    Student st;
    ifstream fin("student.txt");
    fin.read((char*)&st,sizeof(st));
    cout<<"The data from file is: ";
    st.DisplaYData();
    getch();
}