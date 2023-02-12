#include<iostream>
using namespace std;
class Box
{
    public:
    Box()
    {
        cout<<"\n I am from Constructor.";
    }
    ~Box()
    {
        cout<<"\n I am from Destructor.";
    }
};
int main()
{
    Box b1;
    int i=2;
    if (i>0)
    {
        Box b2,b3;
    }
}