/*Write a program to use pure virtual function to implement run time polymorphism using array of pointer to base class.*/
#include<iostream>
using namespace std;
class Polygon
{
    public:
    virtual void Draw()=0;
};
class Rectangle: public Polygon
{
    public:
    void Draw()
    {
        cout<<"Drawing a rectangle....."<<endl;
    }
};
class Triangle:public Polygon
{
    public:
    void Draw()
    {
        cout<<"Drawing a triangle......"<<endl;
    }
};
class Pentagon:public Polygon
{
    public:
    void Draw()
    {
        cout<<"Drawing a pentagon........"<<endl;
    }
};
int main()
{
    Polygon *p[3];
    Rectangle rect;
    Triangle tri;
    Pentagon pent;
    p[0]=&rect;
    p[1]=&tri;
    p[2]=&pent;
    for(int i=0;i<3;i++)
    p[i]->Draw();
}