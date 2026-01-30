//Modify program 101 to initialize data members with parameterized constructor.
#include<iostream>
using namespace std;
class Box
{
    private:
    float l,b,h;
    public:
    Box(float len,float br,float he)
    {
        l=len;
        b=br;
        h=he;
    }
    void DisplayMembers()
    {
        cout<<"Length: "<<l;
        cout<<"\nBreadth: "<<b;
        cout<<"\nHeight:"<<h;
    }
    float getVolume()
    {
        return (l*b*h);
    }
};
int main()
{
    float vol;
    Box b(10.5,5,6.5);
    b.DisplayMembers();
    vol=b.getVolume();
    cout<<"\nThe volume of box is: "<<vol;
}