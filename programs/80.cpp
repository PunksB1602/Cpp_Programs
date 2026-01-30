//Write a program to illustrate static member function.
#include<iostream>
using namespace std;
class Box
{
    static int count;
    public:
    static int GetCount()
    {
        return count;
    }
    static int IncreaseCount()
    {
       return count++;
    }
};
int Box::count;
int main()
{
    cout<<"Initially value of count is: "<<Box::GetCount()<<endl;
    Box b1,b2,b3;
    Box::IncreaseCount();
    Box::IncreaseCount();
    Box::IncreaseCount();
    cout<<"Finally value of count is: "<<Box::GetCount()<<endl;
}