//Write a program of your choice to illustrate the use of friend function.
#include<iostream>
using namespace std;
class Circle
{
    private:
    float rad;
    public:
    void GetData()
    {
        cout<<"Enter radius: ";
        cin>>rad;
    }
    friend void Area(Circle);
};
void Area(Circle cir)
{
    float a;
    a=3.14*cir.rad*cir.rad;
    cout<<"Area is: "<<a;
}
int main()
{
    Circle c;
    c.GetData();
    Area(c);
}