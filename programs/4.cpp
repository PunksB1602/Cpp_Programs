//Write a program to illustrate the structure of C++ program with definition of class.
#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void ReadData()
    {
        cout<<"Enter length, breadth and height: ";
        cin>>l>>b>>h;
    }
    void DisplayVolume()
    {
        cout<<"Volume is:"<<(l*b*h);
    }
    };
    int main()
    {
        Box ob;
        ob.ReadData();
        ob.DisplayVolume();
        return 0;
    }
