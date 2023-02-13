//Write a program to overload plus operator to add two complex numbers using friend function.
#include<iostream>
using namespace std;
class Complex
{
    private:
    float real,img;
    public:
    Complex()
    {
    }
    Complex(float r,float i)
    {
        real=r;
        img=i;
    }
    friend Complex operator+(Complex,Complex);
    void Display()
    {
        cout<<real<<"+j"<<img<<endl;
    }
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return (temp);
}
int main()
{
    Complex C1,C2,C3;
    C1=Complex(3,2);
    C2=Complex(4,1);
    C3=C1+C2;
    cout<<"C1= ";
    C1.Display();
    cout<<"C2= ";
    C2.Display();
    cout<<"C3= ";
    C3.Display();
}