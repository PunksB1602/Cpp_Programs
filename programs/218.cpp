//Write a program of your choice to illustrate the use of nested namespace.
#include<iostream>
namespace OuterNamespace
{
    int num=10;
    namespace InnerNamespace
    {
        void Display()
        {
            std::cout<<"The value of num is: "<<num;
        }
    }
}
int main()
{
    OuterNamespace::InnerNamespace::Display();
    return 0;
}