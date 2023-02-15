/*Write a program to create class Figure with dim1 and dim2 as data members and constructor to initializa its data. Create a derived class
called Triangle and define a member function Area() in it to calculate the area of triangle. Create another derived class called Rectangle
and define a member function Area() to calculate the area of rectangle. Implement this program using the run time polymorphism.*/
#include<iostream>
using namespace std;
class Figure
{
    protected:
    float dim1,dim2;
    public:
    Figure(float a,float b)
    {
        dim1=a;
        dim2=b;
    }
    virtual float Area()
    {
        return 0.0;
    }
};
class Rectangle:public Figure
{
    public:
    Rectangle(float length,float breadth):Figure(length,breadth)
    {}
    float Area()
    {
        return (dim1*dim2);
    }
};
class Triangle:public Figure
{
    public:
    Triangle(float height,float base):Figure(height,base)
    {}
    float Area()
    {
        return(dim1*dim2/2);
    }
};
int main()
{
    Figure *f;
    Rectangle rect(100.5,7.0);
    Triangle tri(10.5,5.6);
    float area_rect,area_tri;
    f=&rect;
    area_rect=f->Area();
    f=&tri;
    area_tri=f->Area();
    cout<<"Area of Rectangle: "<<area_rect<<endl;
    cout<<"Area of Triangle: "<<area_tri<<endl;
}