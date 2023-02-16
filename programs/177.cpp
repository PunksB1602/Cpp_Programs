//Write a program to use get() function to read character from keyboard and put() function to display the character on the screen.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a single character: ";
    cin.get(ch);
    cout<<"Your entered character is (using put()): ";
    cout.put(ch);
    cout<<endl<<"Your entered character is (using <<): "<<ch;
}