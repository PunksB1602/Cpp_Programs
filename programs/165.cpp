//Write a program to pass arguments/data to base class constructor from derived class constructor.
#include<iostream>
using namespace std;
class Figure
{
    protected:
    float dimension1,dimesnion2;
    public:
    Figure(float dim1,float dim2)
    {
        dimension1=dim1;
        dimesnion2=dim2;
    }
    void DisplayData()
    {
        cout<<"First Dimension: "<<dimension1<<endl;
        cout<<"Second Dimension: "<<dimesnion2<<endl;
    }
};
class Rectangle:public Figure
{
    public:
    Rectangle(float a, float b):Figure(a,b)
    {}
    float getArea()
    {
        return (dimension1*dimesnion2);
    }
};
int main()
{
    Rectangle r(10.5,4.5);
    r.DisplayData();
    cout<<"Area of rectangle is: "<<r.getArea();
}