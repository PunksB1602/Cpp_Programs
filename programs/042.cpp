//Write a program to read n numbers from user and find maximum and minimum number among them using concept of array.
#include<iostream>
using namespace std;
int main()
{
    int nums[100],max,min,i,n;
    cout<<"How many numbers are there? ";
    cin>>n;
    cout<<"Enter "<<n<< " numbers: "<<endl;
    for(i=0;i<n;i++)
    cin>>nums[i];
    max=nums[0];
    min=nums[0];
    for(i=0;i<n;i++)
    {
        if(max<nums[i])
        max=nums[i];
        if(min>nums[i])
        min=nums[i];
    }
    cout<<"\nThe maximum number is: "<<max<<endl;
    cout<<"The minimum number is: "<<min;
    return 0;
}