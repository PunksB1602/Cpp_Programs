//Write a program to read number of students and then marks of each student.
// Display entered marks and their average. Use Dynamic Memory Allocation to reserve memory to store marks of each student.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
    float *p,sum=0,avg;
    cout<<"How many students are there?\n ";
    cin>>n;
    cout<<"Enter marks of each student:\n ";
    p=new float[n];
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);
        sum+=*(p+i);
    }
    avg=sum/n;
    cout<<endl<<"The average marks of";
    for(i=0;i<n;i++)
    cout<<setw(3)<<*(p+i);
    cout<<" is: "<<avg;
    delete[]p;
    return 0;
}