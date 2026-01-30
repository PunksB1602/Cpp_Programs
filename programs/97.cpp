//Write a program to illustrate the characteristics of a constructor.
#include<iostream>
using namespace std;
class Box
{
    public:
    Box()
    {
        cout<<"\n I am from constructor.";
    }
};
int main()
{
    Box b1,b2,b3;
}