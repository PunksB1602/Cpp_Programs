//Write a program to convert polar co-ordinate into rectangular co-ordinate value using conversion routine in destination class.
#include<iostream>
#include<math.h>
using namespace std;
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
    double getr()
    {
        return radius;
    }
    double geta()
    {
        return angle;
    }
};
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
    Rectangular(Polar p)
    {
        double r,a;
        r=p.getr();
        a=p.geta();
        xco=r*cos(a);
        yco=a*sin(a);
    }
    void Display()
    {
        cout<<"("<<xco<<","<<yco<<")";
    }
};
int main()
{
    Rectangular r;
    Polar p(10.0,0.785398);
    r=p;
    cout<<"The value in Polar co-ordinate is: ";
    p.Display();
    cout<<endl<<"The values in Rectangular co-ordinate is: ";
    r.Display();
}