//Write a program to illustrate the use of inheritance.
#include<iostream>
using namespace std;
class Shape
{
    protected:
    int width,height;
    public:
    void ReadDimensions(int a, int b)
    {
        width=a;
        height=b;
    }
};
    class Rectangle: public Shape
    {
        public:
        int Area()
        {
            return(width*height);
        }
    };
    class Triangle: public Shape
    {
        public:
        int Area()
        {
            return(width*height/2);
        }
    };
    int main()
    {
        Rectangle rect;
        Triangle tr;
        rect.ReadDimensions(4,2);
        tr.ReadDimensions(5,4);
        cout<<"\nArea of rectangle is: "<<rect.Area();
        cout<<"\nArea of Triangle is: "<<tr.Area();
    }