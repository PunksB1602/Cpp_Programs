//write a program to convert Nepali Rupees(i.e. single value expressed in Rs) in Dollar and Cent.Assume 1$=Rs.128 and 100 cent=1$.
#include<iostream>
using namespace std;
class Dollar
{
    int dol;
    float cent;
    public:
    Dollar()
    {
        dol=0;
        cent=0.0;
    }
    Dollar(int Rs)
    {
        float equiv_dollar=Rs/128.0;
        dol=int(equiv_dollar);
        cent=100*(equiv_dollar-dol);
    }
    void Display()
    {
        cout<<"$"<<dol<<" and "<<cent<<" cent";
    }
};
int main()
{
    Dollar d1=345,d2(450);
    cout<<"The Nepalese Currency Equivalent in Dollar and Cent ";
    cout<<endl<<"Equivalent of Rs. 345 is: ";
    d1.Display();
    cout<<endl<<"Equivalent of Rs. 450 is: ";
    d2.Display();
}