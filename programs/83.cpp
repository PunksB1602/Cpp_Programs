//Write a program to define a class Complex with data members real and img. Define a member function within it
//to add two complex numbers and return sum of them.
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,imj;
    public:
    void GetComplex();
    Complex AddComplex(Complex);
    void Display();
};
void Complex::GetComplex()
{
    cout<<"Real part:\t";
    cin>>real;
    cout<<"Imaginary:\t";
    cin>>imj;
}
void Complex::Display()
{
    cout<<"The sum is:\t";
    if(imj>0)
    cout<<real<<"+j"<<imj;
    else
    cout<<real<<"-j"<<(-1)*imj;
}
Complex Complex::AddComplex(Complex c)
{
    Complex ob;
    ob.real=real+c.real;
    ob.imj=imj+c.imj;
    return ob;
}
int main()
{
    Complex first,second,result;
    cout<<"\nEnter first complex number\n";
    first.GetComplex();
    cout<<"\nEnter second complex number\n";
    second.GetComplex();
    result=first.AddComplex(second);
    result.Display();
}