//Write a program to overload binary plus operator (+) for addition of two distances expressed in m and cm.
#include<iostream>
using namespace std;
class Distance
{
    int meter,centi;
    public:
    Distance(int m,int cm)
    {
        meter=m;
        centi=cm;
    }
    Distance()
    {
        meter=0;
        centi=0;
    }
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.centi=centi+d.centi;
        temp.meter=meter+d.meter;
        if(temp.centi>=100)
        {
            temp.meter++;
            temp.centi=temp.centi-100;
        }
        return temp;
    }
    void Display()
    {
        cout<<meter<<"m "<<centi<<"cm"<<endl;
    }
};
int main()
{
    Distance d1(10,50),d2(5,70),d3;
    cout<<"The first distance is: ";
    d1.Display();
    cout<<"The second distance is: ";
    d2.Display();
    d3=d1+d2;
    cout<<"The sum of two distances is:";
    d3.Display();
}