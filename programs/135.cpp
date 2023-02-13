//Write a program to convert meter value into object of a class Distance which has feet and inch as members.
#include<iostream>
using namespace std;
const float MTF=3.280833;
class Distance
{
    int feet;
    float inch;
    public:
    Distance()
    {
        feet=0;
        inch=0.0;
    }
    Distance(float m)
    {
        float total_feet=MTF*m;
        feet=int(total_feet);
        inch=12*(total_feet-feet);
    }
    void Display()
    {
        cout<<feet<<"\'"<<inch<<"\"";
    }
};
int main()
{
    Distance dist;
    float meter;
    cout<<"Enter distance in meter: ";
    cin>>meter;
    dist=meter;
    cout<<"The meter equivalent object is: ";
    dist.Display();
}