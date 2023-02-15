//Create a class Polygon with data members: dimension1 and dimension2 and a member function: ReadDimension() to read data members.
//Derive two classes Rectangle and Triangle from Polygon class with appropriate member function to calculate area of each rectangle and triangle.
#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int dim1,dim2;
    public:
    void ReadDim()
    {
        cout<<"Enter two dimensions of polygon: ";
        cin>>dim1>>dim2;
    }
};
class Rectangle:public Polygon
{
    public:
    float Area()
    {
        return dim1*dim2;
    }
};
class Triangle:public Polygon
{
    public:
    float Area()
    {
        return 0.5*dim1*dim2;
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    cout<<"Reading data for rectangle............"<<endl;
    r.ReadDim();
    cout<<"Area of rectangle is: "<<r.Area()<<endl;
    cout<<"Reading data for triangle.........."<<endl;
    t.ReadDim();
    cout<<"Area of triangle is: "<<t.Area();
}