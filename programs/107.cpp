//Write a program to show the use of destructor to destroy variables.
#include<iostream>
using namespace std;
class Box
{
    private:
    int *p;
    public:
    Box()
    {
        p=new int(3);
    }
    void ReadData()
    {
        cout<<"\nEnter length,breadth and height: ";
        cin>>*p>>*(p+1)>>*(p+2);
    }
    float getVolume()
    {
        return((*p)*(*(p+1))*(*(p+2)));
    }
    ~Box()
    {
        delete p;
        cout<<"\n Array deleted.......";
    }
};
int main()
{
    Box b;
    b.ReadData();
    cout<<"\nVolume is: "<<b.getVolume();
}