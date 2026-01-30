//Modify the program 76 to define public function members outside the class body.
#include<iostream>
using namespace std;
class Box
{
    private:
    float length,breadth,height;
    public:
    void ReadData();
    float Volume();
};
int main()
{
    Box b1;
    float v;
    b1.ReadData();
    v=b1.Volume();
    cout<<"The volume is:\t"<<v;
}
void Box::ReadData()
{
    cout<<"Enter length,breadth and height: ";
    cin>>length>>breadth>>height;
}
float Box::Volume()
{
    return(length*breadth*height);
}