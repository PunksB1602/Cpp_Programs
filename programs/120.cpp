//Write a program to overload an increment operator i.e.(++) in prefix notation.
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
    Distance operator++()
    {
        Distance d;
        d.centi=++centi;
        d.meter=++meter;
        if(d.centi>=100)
        {
            ++d.meter;
            d.centi=d.centi-100;
        }
        return d;
    }
    void Display()
    {
        cout<<meter<<"m "<<centi<<"cm"<<endl;
    }
};
int main()
{
    Distance dis(10,50),dis1;
    cout<<"The original distance: ";
    dis.Display();
    dis1=++dis;
    cout<<"The value of object dis1: ";
    dis1.Display();
    cout<<"The value of object dis: ";
    dis.Display();
}