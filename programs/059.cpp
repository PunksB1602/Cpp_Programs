#include<iostream>
using namespace std;
float sum(float x, float y)
{
    return x+y;
}
float sum(float x, float y, float z)
{
    return x+y+z;
}
int main()
{
    cout<<"The sum of two integers: "<<sum(10,20);
    cout<<endl<<"The sum of two float: "<<sum(45.61, 5.69);
    cout<<endl<<"The sum of three float: "<<sum(10.5,20.5,30.3);
}