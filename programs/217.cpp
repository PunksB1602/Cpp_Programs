//Write a program to illustrate the use of namespace.
#include<iostream>
namespace Number
{
    int num=10;
}
int main()
{
    int num=20;
    std::cout<<"Inside main:num="<<num;
    std::cout<<std::endl<<"num within namespace: "<<Number::num;
    return 0;
}