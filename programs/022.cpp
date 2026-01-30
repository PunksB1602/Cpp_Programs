//Write a program to define enumerator and use it.
#include<iostream>
using namespace std;
int main()
{
    enum Color
    {
    RED,
    GREEN,
    BLUE,
    WHITE,
};
Color c;
c=BLUE;
cout<<"Your color code is: "<<c;
return 0;
}