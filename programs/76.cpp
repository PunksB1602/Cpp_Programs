//Write a program to define a class named Box which has private data length, breadth & height and public functions ReadData()
//reading data members and Volume() to calculate volume of Box. Use this class to calculate volume of a box.
#include<iostream>
using namespace std;
class Box
{
    private: 
    float length,breadth,height;
    public:
    void ReadData()
    {
        cout<<"Enter length, breadth and height: ";
        cin>>length>>breadth>>height;
    }
    float Volume()
    {
        return(length*breadth*height);
    }
};
int main()
{
    Box b1;
    float v1;
    b1.ReadData();
    v1=b1.Volume();
    cout<<"The volume is:\t"<<v1;
}