//Write a program to define enumerator with your choice. 
//Assign your own integer value to enumerator instead of default value.
#include<iostream>
using namespace std;
int main()
{
    enum Shape
    {
        Triangle=10,
        Circle,
        Rectangle,
        Square=30,
    };
    cout<<"The integer values assigned to enumerator: ";
    cout<<Triangle<<" "<<Circle<<" "<<Rectangle<<" "<<Square;
    return 0;
}