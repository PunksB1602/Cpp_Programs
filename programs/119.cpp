//Modify 118 such that operator function returns object of type Complex.
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex(int r, int i)
    {
        real=r;
        img=i;
    }
    Complex()
    {
        real=0;
        img=0;
    }
    Complex operator-()
    {
        Complex temp;
        temp.real=-real;
        temp.img=-img;
        return temp;
    }
    void Display()
    {
        cout<<"Real Part: "<<real<<endl;
        cout<<"Imaginary Part:"<<img<<endl;
    }
};
int main()
{
    Complex c1(4,5),c2;
    cout<<"The complex number is: "<<endl;
    c1.Display();
    c2=-c1;
    cout<<endl<<"The complex number after unary minus: "<<endl;
    c2.Display();
}