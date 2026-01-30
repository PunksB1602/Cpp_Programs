//Use of 'using' keyword access selected members through using declaration.
#include<iostream>
using namespace std;
namespace First
{
    float f=4.56;
    int i=100;
}
int main()
{
    using First::f;
    cout<<"f=\t"<<f<<endl;
    return 0;
}