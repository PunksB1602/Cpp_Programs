//Write a program to overload a binary plus operator(+) for addition of two complex numbers.
#include<iostream>
using namespace std;
class Complex
{
    private:
    float real, img;
    public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(float r,float i)
    {
        real=r;
        img=i;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return(temp);
    }
    void Display()
    {
        cout<<real<<"+j"<<img<<endl;
    }
    };
    int main()
    {
        Complex C1(2,5),C2(4,6),C3;
        C3=C1+C2;
        cout<<"C1=";C1.Display();
        cout<<"C2=";C2.Display();
        cout<<"C3=";C3.Display();
    }