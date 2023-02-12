//Write a program to define a class Box with its data members:l,b and h. Initialize object of the class with some fixed values through
//constructor with no argument.
#include<iostream>
using namespace std;
class Box
{
    private:
    float l,b,h;
    public:
    Box()
    {
        l=10;
        b=5;
        h=3;
    }
    void DisplayMembers()
    {
        cout<<"Length: "<<l;
        cout<<"\nBreadth: "<<b;
        cout<<"\nHeight: "<<h;
    }
    float getVolume()
    {
        return l*b*h;
    }
};
int main()
{
    float vol;
    Box b;
    b.DisplayMembers();
    vol=b.getVolume();
    cout<<"\nThe volume of box is: "<<vol;
}