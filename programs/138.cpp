//Write a program to convert polar co-ordinate into rectangular coordinate(i.e. convert object of class Polar into object of class Rectangular).
#include<iostream>
#include<math.h>
using namespace std;
class Rectangular
{
    double xco,yco;
    public:
    Rectangular()
    {
        xco=0.0;
        yco=0.0;
    }
    Rectangular(double x,double y)
    {
        xco=x;
        yco=y;
    }
    void Display()
    {
        cout<<"("<<xco<<","<<yco<<")";
    }
};
class Polar
{
    double radius, angle;
    public:
    Polar()
    {
        radius=0.0;
        angle=0.0;
    }
    Polar(double r,double a)
    {
        radius=r;
        angle=a;
    }
    void Display()
    {
        cout<<"("<<radius<<","<<angle<<")";
    }
    operator Rectangular()
    {
        double x,y;
        x=radius*cos(angle);
        y=radius*sin(angle);
        return Rectangular(x,y);
    }
};
int main()
{
    Rectangular r;
    Polar p(70.0,0.785398);
    r=p;
    cout<<endl<<"The Polar Co-ordinate is: ";
    p.Display();
    cout<<endl<<"The Rectangular Co-ordinate is: ";
    r.Display();
}