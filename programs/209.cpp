//Write a function to find larger integer,fractional number and character among two using function template.
#include<iostream>
#include<iomanip>
using namespace std;
template<class DT>
DT Larger(DT x,DT y)
{
    if(x>y)
    return x;
    else 
    return y;
}
int main()
{
    int a,b;
    float m,n;
    char p,q;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Enter two fractional numbers: ";
    cin>>m>>n;
    cout<<"Enter two characters: ";
    cin>>p>>q;
    cout<<"The larger integer is: "<<Larger(a,b)<<endl;
    cout<<"The larger fractional number is: "<<Larger(m,n);
    cout<<endl<<"The larger character is: "<<Larger(p,q);
}