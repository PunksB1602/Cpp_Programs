//Write a program to overload equality operator(i.e.==).
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet,inch;
    public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
    void Display()
    {
        cout<<feet<<"\'"<<inch<<'\"';
    }
    void ReadDistance()
    {
        cout<<"Feet:";
        cin>>feet;
        cout<<"Inches:";
        cin>>inch;
    }
    bool operator==(Distance dist)
    {
        if(dist.feet==feet && dist.inch==inch)
        return true;
        else 
        return false;
    }
};
int main()
{
    Distance d1,d2;
    cout<<"Enter First Distance:"<<endl;
    d1.ReadDistance();
    cout<<"Enter Second Distance:"<<endl;
    d2.ReadDistance();
    cout<<"\nFirst Distance in feet & inch=";
    d1.Display();
    cout<<"\nSecond Distance in feet and inch=";
    d2.Display();
    if(d1==d2)
    cout<<"\nTwo distances are equal..............";
    else
    cout<<"\nTwo distances are unequal...........";
}