//Write a program to overload a unary minus operator.
#include<iostream>
using namespace std;
class Complex
{
    int real, img;
    public:
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    Complex()
    {
        real=0;
        img=0;
    }
    void operator-()
    {
        real=-real;
        img=-img;
    }
    void Display()
    {
        cout<<"Real Part: "<<real<<endl;
        cout<<"Imaginary Part: "<<img<<endl;
    }
};
int main()
{
    Complex comp(4,5);
    cout<<"The complex number is: "<<endl;
    comp.Display();
    -comp;
    cout<<endl<<"The complex number after unary minus:"<<endl;
    comp.Display();
}
