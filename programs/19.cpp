/*Write a program to use setfill() manipulator to use a character '*' to fill unused space specified by setw()*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num1=12345, num2=2356;
    cout<<endl<<"num1="<<setw(20)<<setfill('*')<<num1<<endl;
    cout<<"num2="<<setfill('$')<<setw(8)<<num2;
    return 0;
}


