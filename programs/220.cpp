//Use of 'using' keyword to access all members through using directives.
#include<iostream>
using namespace std;
namespace First
{
    float f=4.56;
    int i=100;
}
int main()
{
    using namespace First;
    cout<<"f=\t"<<f<<endl;
    cout<<"i=\t"<<i<<endl;
    return 0;
}