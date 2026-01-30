//Write a program to illustrate the use of implicit conversion from float to int type.
#include<iostream>
using namespace std;
int main()
{
    float num=80.56;
    int numi;
    numi=num;
    cout<<"Value as int type: "<<numi;
    cout<<endl<<"Value as float type: "<<num;
    return 0;
}