//Write a program to illustrate class template.
#include<iostream>
using namespace std;
template<class T>
class Rectangle
{
    private:
    T first,second;
    public:
    Rectangle()
    {
        first=0;
        second=0;
    }
    Rectangle(T x, T y)
    {
        first=x;
        second=y;
    }
    T Area()
    {
        return first*second;
    }
};
int main()
{
    Rectangle<int>reci(5,7);
    Rectangle<float>recf(3.5,6.8);
    cout<<"Area with integer dimension: "<<reci.Area();
    cout<<endl<<"Area with fractional dimension: "<<recf.Area();
}