//Write a program to illustrate overloaded constructors to initialize different objects of a class.
#include<iostream>
using namespace std;
class Box
{
    private:
    float l,b,h;
    public:
    Box()
    {
        l=b=h=0;
    }
    Box(float side)
    {
        l=b=h=side;
    }
    Box(float len,float br,float he)
    {
        l=len;
        b=br;
        h=he;
    }
    Box(Box &ob)
    {
        l=ob.l;
        b=ob.b;
        h=ob.h;
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
    Box b1,b2(10.0),b3(10.5,3.5,5.5),b4(b2);
    cout<<"\nFor constructor with no argument i.e. object b1" ;
    b1.DisplayMembers();
    vol=b1.getVolume();
    cout<<"\nThe volume of box is: "<<vol;
    cout<<"\nFor constructor with one argument i.e. object b2: ";
    b2.DisplayMembers();
    vol=b2.getVolume();
    cout<<"\nThe volume of box is: "<<vol;
    cout<<"\nFor constructor with 3 arguments i.e. object b3: ";
    b3.DisplayMembers();
    vol=b3.getVolume();
    cout<<"\nThe volume of box is: "<<vol;
    cout<<"\n For copy constructor i.e. object  b4: ";
    b4.DisplayMembers();
    vol=b4.getVolume();
    cout<<"\nThe volume of box is: "<<vol;
}