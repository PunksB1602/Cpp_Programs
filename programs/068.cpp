//Write a function Average() which calculates average age of two students expressed in int value(i.e. only year)
//and write another function having same name Average() which calculates average wight of two functions in main() function.
#include<iostream>
using namespace std;
int Average(int, int);
float Average(float, float);
int main()
{
    int p,q,AV1;
    float x,y,AV2;
    cout<<"Enter the age of two students in year: ";
    cin>>p>>q;
    cout<<"Enter the weight of two students in kg: ";
    cin>>x>>y;
    AV1=Average(p,q);
    AV2=Average(x,y);
    cout<<"The average of age is: "<<AV1;
    cout<<endl<<"The average of weight is: "<<AV2;
    return 0;
}
int Average(int a,int b)
{
    return((a+b)/2);
}
float Average(float c,float d)
{
    return((c+d)/2);
}