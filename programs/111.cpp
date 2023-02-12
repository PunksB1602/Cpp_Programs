//Write a program to use this pointer to return object of a class.
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
    cout<<"\nImaginary part:\t";
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
    real=real+c.real;
    imj=imj+c.imj;
    return *this;
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