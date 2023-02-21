//Write a program to illustrate the use of class template with different types of memebers.
#include<iostream>
using namespace std;
template<class T1,class T2>
class Distance
{
    private:
    T1 feet;
    T2 inch;
    public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(T1 x,T2 y)
    {
        feet=x;
        inch=y;
    }
    void Display()
    {
        cout<<endl<<"The distance is: "<<feet<<"\'"<<inch<<"\"";
    }
};
int main()
{
    Distance<int,float>dist1(5,6.512343);
    Distance<int,int>dist2(3,8);
    dist1.Display();
    dist2.Display();
}