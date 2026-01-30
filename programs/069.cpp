//Write a inline function to calculate area of a circle from its radius.
//Read radius from user and calculate its area using above function.
#include<iostream>
using namespace std;
inline float circle(float r)
{
    return(3.14*r*r);
}
int main()
{
    float a,area;
    cout<<"Enter the radius of the circle: ";
    cin>>a;
    area=circle(a );
    cout<<"The area of the circle is: "<<area;
    return 0;
}