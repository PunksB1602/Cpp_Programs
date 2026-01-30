//Write a program to find area of a triangle and square using function overloading.
#include<iostream>
using namespace std;
float area(float, float);
float area(float);
int main()
{
    float x,y,z,A1,A2;
    cout<<"Enter the base and height of the triangle: ";
    cin>>x>>y;
    cout<<"Enter the length of a side of the square: ";
    cin>>z;
    A1=area(x,y);
    A2=area(z);
    cout<<"Area of the triangle is: "<<A1;
    cout<<endl<<"Area of the square is: "<<A2;
    return 0;
}
float area(float b,float h)
{
    return(0.5*b*h);
}
float area(float l)
{
    return(l*l);
}