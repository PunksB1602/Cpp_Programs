//Write a program to overload function template with ordinary functions.
#include<iostream>
using namespace std;
template<class T>
T Max(T a,T b)
{
    cout<<endl<<"Calling template function............"<<endl;
    if(a>b)
    return a;
    else 
    return b;
}
int Max(int a, int b)
{
    cout<<endl<<"Calling normal function........."<<endl;
    if(a>b)
    return a;
    else return b;
}
int main()
{
    int a,b;
    float m,n;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Enter two fractional numberss: ";
    cin>>m>>n;
    cout<<"Maximum number among "<<a<<" and "<<b<<" is: "<<Max(a,b)<<endl;
    cout<<"Maximum number among "<<m<<" and "<<n<<" is: "<<Max(m,n);
}