//Write a program that convert the temperature in Degree Fahrenheit to Degree Centigrade. Make separate class for Centigrade and Fahrenheit
//and define routine(i.e. conversion method) in class Centigrade.
#include<iostream>
using namespace std;
class Fahrenheit
{
    float temp;
    public:
    Fahrenheit()
    {temp=0;}
    Fahrenheit(float t)
    {temp=t;}
    void Display()
    {
        cout<<endl<<"The temperature in fahrenheit is: "<<temp;
    }
};
class Centigrade
{
    float temp;
    public:
    Centigrade()
    {temp=0;  }
    Centigrade(float t)
    {temp=t;}
    void Display()
    {
        cout<<endl<<"The temperature in centigrade is: "<<temp;
    }
    operator Fahrenheit()
    {
        float f;
        f=1.8*temp+32;
        return Fahrenheit(f);
    }
};
int main()
{
    Centigrade c(37.5);
    Fahrenheit f;
    f=c;
    c.Display();
    f.Display();
}