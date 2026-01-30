//Write a program to use vector template and its member functions to store integers.
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums;
    for(int i=1;i<=6;++i)
    {
        nums.push_back(i);
    }
    for(int i=0;i<nums.size();++i)
    {
        cout<<nums[i]<<' ';
    }
    cout<<endl;
}