//Use of scope resolution operator to access members.
#include<iostream>
using namespace std;
namespace First
{
    float f=4.56;
    int i=100;
}
int main()
{
    cout<<"f=\t"<<First::f<<endl;
    cout<<"i=\t"<<First::i<<endl;
    return 0;
}