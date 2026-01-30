//Write a program in C++ to illustrate the use of default constructor.
#include<iostream>
using namespace std;
class Box
{
    private:
    float l,b,h;
    public:
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