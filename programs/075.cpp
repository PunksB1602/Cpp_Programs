//Write a program to define a class with its data members and function members. Use object of this class in main program to access its members.
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    float len,br;
    public:
    void getdata(float l, float b)
    {
        len=l;
        br=b;
    }
    void calculate_area()
    {
        cout<<"\nThe area is: "<<(len*br);
    }
};
int main()
{
    Rectangle r1,r2;
    r1.getdata(10,20);
    r2.getdata(15,10);
    r1.calculate_area();
    r2.calculate_area();
}