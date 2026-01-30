//Write a program to illustrate the use of unnamed namespace.
#include<iostream>
namespace{
    int i=4;
    int m;
}
int main()
{
    std::cout<<"i="<<i<<std::endl;
    m=100;
    std::cout<<"m="<<m;
    return 0;
}