//To convert class type to basic data type [Convert distance expressed in feet and inch into single value meter]
#include<iostream>
using namespace std;
const float MTF=3.280833;
class Distance
{
    int feet;
    float inch;
    public:
    Distance()
    {
        feet=0;
        inch=0.0;
    }
    Distance (int ft, float in)
    {
        feet=ft;
        inch=in;
    }
    operator float()
    {
        float f=inch/12;
        f=f+feet;
        return(f/MTF);
    }
};
int main()
{
    Distance dist1(3,3.37), dist2(200,5.5);
    float m1=float(dist1),m2;
    cout<<endl<<"The value of distance dist1 in meter: "<<m1;
    m2=dist2;
    cout<<endl<<"The value of distance dist2 in meter:= "<<m2;
}