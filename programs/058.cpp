//Write a program to illustrate type conversion in the case of function overloading if data type not matched  in function call 
//with any version of overloaded functions.
#include<iostream>
using namespace std;
int sum(int x, int y)
{
    return x+y;
}
int sum(int x, int y, int z)
{
    return x+y+z;
}
int main()
{
    cout<<"The sum of two integers: "<<sum(10,20);
    cout<<endl<<"The sum of two chars: "<<sum('A','B');
    cout<<endl<<"The sum of three integers: "<<sum(10,20,30);
}
