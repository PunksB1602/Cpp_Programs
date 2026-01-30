//Modify program 98 to read data members of the class using constructor instead of member function.
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
    float getVolume()
    {
        return (l*b*h);
    }
};
int main()
{
    float vol;
    Box ob(10,5.5,3.5);
    vol=ob.getVolume();
    cout<<"The volume of box is: "<<vol;
    return 0;
}