//Write a program to illustrate the use of passing array to a function.
#include<iostream>
#include<iomanip>
using namespace std;
void fun(int a[])
{
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
}
int main()
{
    int nums[5]={1,2,3,4,5},i;
    cout<<"Before function call, the values are: ";
    for(i=0;i<5;i++)
    cout<<setw(3)<<nums[i];
    fun(nums);
    cout<<endl<<"After function call, the values are: ";
    for(i=0;i<5;i++)
    cout<<setw(3)<<nums[i];
    return 0;
}