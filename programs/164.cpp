//Example to show the effect when base class has constructor and derived class has no any constructor.
#include<iostream>
using namespace std;
class Figure
{
    protected:
    float dimension1,dimension2;
    public:
    Figure(float dim1, float dim2)
    {
        dimension1=dim1;
        dimension2=dim2;
    }
    void DisplayData()
    {
        cout<<"First Dimension: "<<dimension1<<endl;
        cout<<"Second Dimension: "<<dimension2<<endl;
    }
};
class Rectangle:public Figure
{
    public:
    float getArea()
    {
        return (dimension1*dimension2);
    }
};
int main()
{
    Rectangle r;
    r.DisplayData();
    cout<<"Area of rectangle is: "<<r.getArea(); 
}