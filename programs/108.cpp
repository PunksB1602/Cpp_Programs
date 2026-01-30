//Write a program to use this pointer to represent address of object
#include<iostream>
using namespace std;
class Box
{
    private:
    float l,b,h;
    public:
    void getAddress()
    {
        cout<<"Address of object using this pointer: "<<this;
    }
};
int main()
{
    Box b;
    b.getAddress();
    cout<<"\nAddress of object directly: "<<&b;
}