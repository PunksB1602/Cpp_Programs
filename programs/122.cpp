//Write a program to overload logical not (i.e.!) operator.
#include<iostream>
using namespace std;
class Coordinate
{
    private:
    int x,y;
    public:
    Coordinate()
    {
        x=0;
        y=0;
    }
    Coordinate(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void ReadPoint()
    {
        cout<<"Enter x and y coordinate: ";
        cin>>x>>y;
    }
    int operator !()
    {
        if(x==0 && y==0)
        return 1;
        else
        return 0;
    }
    void Display()
    {
        cout<<"The coordinate is: ("<<x<<","<<y<<")";
    }
};
int main()
{
    Coordinate pt;
    pt.ReadPoint();
    if(!pt)
    cout<<"The point is origin"<<endl;
    else
    cout<<"The point is not origin"<<endl;
    pt.Display();
}