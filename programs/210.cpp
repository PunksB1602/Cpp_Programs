//Write a program to illustrate the use of function template with multiple parameters.
#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
void CalculateSize(T1 a,T2 b,T3 c)
{
    cout<<endl<<"Memory size of first parameter: "<<sizeof(a)<<"bytes";
    cout<<endl<<"Memory size of second parameter: "<<sizeof(b)<<"bytes";
    cout<<endl<<"Memory size of third parameter: "<<sizeof(c)<<"bytes";
}
int main()
{
    CalculateSize(10,56.67,'r');
}