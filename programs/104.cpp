//Write a program which contains a class named Box with appropriate data members and function members. 
//Initialize an object of the class with parameterized constructor using copy constructor and 
//copy this object into another object using copy constructor.
#include<iostream>
using namespace std;
class Box
{
    private:
    float l,b,h;
    public:
    Box(float len, float br, float he)
    {
        l=len;
        b=br;
        h=he;
    }
    Box(Box &b2)
    {
        l=b2.l;
        b=b2.b;
        h=b2.h;
    }
    void DisplayMembers()
    {
        cout<<"\nLength: "<<l;
        cout<<"\nBreadth: "<<b;
        cout<<"\nHeight: "<<h;
    }
    float getVolume()
    {
        return(l*b*h);
    }
};
int main()
{
    float vol;
    Box b1(10.5,5.5,6.5);
    Box b2(b1);
    cout<<".........For first object b1...........: ";
    b1.DisplayMembers();
    vol=b1.getVolume();
    cout<<"\nThe volume of box is:"<<vol;
    cout<<"\n..........For second object b2..........: ";
    b2.DisplayMembers();
    vol=b2.getVolume();
    cout<<"\nThe volume of box is: "<<vol;
}