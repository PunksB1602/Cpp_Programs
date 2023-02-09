//Write a function named AreaofCircle() which receives two arguments: radius and PI.
//Make default arguments to PI to use default value 3.14 if its is not supplied in function call otherwise use user-suplied value.
#include<iostream>
using namespace std;
float AreaofCircle(float,float=3.14);
int main()
{
    float r,area;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    area=AreaofCircle(r);
    cout<<"Area of the circle is: "<<area;
    return 0;
}
float AreaofCircle(float a, float PI)
{
    return(PI*a*a);
}