//Write a program with a class and its constructor with default arguments.
#include<iostream>
using namespace std;
class Box
{
    private:
    float l,b,h;
    public:
    Box(float len=10,float br=5,float he=5)
    {
        l=len;
        b=br;
        h=he;
    }
    void DisplayMembers()
    {
        cout<<"Length: "<<l;
        cout<<"\nBreadth: "<<b;
        cout<<"\nHeight: "<<h;
    }
    float getVolume()
    {
        return (l*b*h);
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