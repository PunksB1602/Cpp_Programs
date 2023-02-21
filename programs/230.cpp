//Write a program to illustrate the use of rethrowing exception.
#include<iostream>
using namespace std;
void RethrowDemo()
{
    try
    {
    throw "hello";
    }
catch(const char*)
{
    cout<<"Caught exception.....";
    throw;
}
}
int main()
{
    cout<<"Main start\n";
    try
    {
        RethrowDemo();
    }
    catch(const char*)
    {
        cout<<"\nCaught exception inside main\n";
    }
    cout<<"Main end";
    return 0;
}