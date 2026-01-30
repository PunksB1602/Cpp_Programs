//Write a program to overload function templates.
#include<iostream>
using namespace std;
template<class T>
T Max(T a,T b)
{
    if (a>b)
    return a;
    else
    return b;
}
template <class T>
T Max(T a,T b, T c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else 
    return c;
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Maximum number among "<<a<<" and "<<b<<" is: "<<Max(a,b)<<endl;
    cout<<"Maximum number among "<<a<<" and "<<b<<" and "<<c<<" is: "<<Max(a,b,c);
}