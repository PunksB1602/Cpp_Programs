//Write a program in C++ to define an enumerator Color with various names of colors as its members(i.e. enumerated list).
//Read an integer from user and display color name corresponding to the integer.
#include<iostream>
using namespace std;
int main()
{
    enum Color
    { Violet,Indigo,Blue,Green,Yellow,Orange,Red};
    Color C;
    int n;
    cout<<"Please enter any number from 1 to 7: ";
    cin>>n;
    C=Color(n);
    if(C==1)
         cout<<"The Color is Violet. ";
    else if(C==2)
        cout<<"The Color is Indigo.";
    else if(C==3)
        cout<<"The Color is Blue.";
    else if(C==4)
        cout<<"The Color is Green.";
    else if(C==5)
        cout<<"The Color is Yellow.";
    else if(C==6)
        cout<<"The Color is Orange.";
    else if(C==7)
        cout<<"The Color is Red.";
        else 
        cout<<"Invalid choice.";
    return 0;
}   