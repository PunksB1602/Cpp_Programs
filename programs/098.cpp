//Write a program to define a class Box with data members:l,b &h. Define appropriate member function to read its data members
//and calculate volume of a box.
#include<iostream>
using namespace std;
class Box
{
    private:
    float l,b,h;
    public:
    void ReadData(float len,float br,float he)
    {
        l=len;
        b=br;
        h=he;
    }
    float getVolume()
    {
        return(l*b*h);
    }
};
int main()
{
    float vol;
    Box ob;
    ob.ReadData(10,5.5,3.5);
    vol=ob.getVolume();
    cout<<"The volume of box is: "<<vol;
    return 0;
}