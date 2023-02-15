//Casting base class pointer to derived class pointer.
#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int width,height;
    public:
    Polygon(int a,int b)
    {
        width=a;
        height=b;
    }
};
class Rectangle:public Polygon
{
    public:
    Rectangle(int l,int b):Polygon(l,b)
    {}
    int Area()
    {
        return (width*height);
    }
};
class Triangle:public Polygon
{
    public:
    Triangle(int l,int b):Polygon(l,b)
    {}
    int Area()
    {
        return (width*height/2);
    }
};
int main()
{
    Rectangle rect(10,11);
    Triangle tr(5,6);
    Polygon *poly;
    int ar;
    poly=&rect;
    ar=((Rectangle*)poly)->Area();
    cout<<"Area of rectangle: "<<ar<<endl;
    poly=&tr;
    ar=((Triangle*)poly)->Area();
    cout<<"Area of rectangle: "<<ar<<endl;
}