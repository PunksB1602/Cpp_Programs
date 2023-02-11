//Define a class named Complex with data members real and img. Use appropriate member function of the class which accepts two
//objects of the class and add them.
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,imj;
    public:
    void GetComplex();
    void AddComplex(Complex,Complex);
    void Display();
};
void Complex::GetComplex()
{
    cout<<" Real part:\t";
    cin>>real;
    cout<<" Imaginary part:\t";
    cin>>imj;
}
void Complex::AddComplex(Complex c1,Complex c2)
{
    real=c1.real+c2.real;
    imj=c1.imj+c2.imj;
}
void Complex::Display()
{
    cout<<"The sum is:\t";
    if(imj>0)
    cout<<real<<"+j"<<imj;
    else
    cout<<real<<"-j"<<(-1)*imj;
}
int main()
{
    Complex first,second,result;
    cout<<"\n Enter first complex number:\n";
    first.GetComplex();
    cout<<"\n Enter second complex number:\n";
    second.GetComplex();
    result.AddComplex(first,second);
    result.Display();
}