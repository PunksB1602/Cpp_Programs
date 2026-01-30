//Write a program that reads marks's, percentage in an examination of 10 students.
// Calculate and display the average percentage and deviation percentage from average of each student.
#include<iostream>
using namespace std;
int main()
{
    float marks[10],avg,dev,sum=0;
    int i;
    cout<<"Enter percentage of 10 students: "<<endl;
    for(i=0;i<10;i++)
    {
        cout<<i+1<<"th value: ";
        cin>>marks[i];
        sum=sum+marks[i];
    }
    avg=sum/10;
    cout<<endl<<"The average marks is: "<<avg;
    cout<<endl<<"The deviation of each student from average: ";
    for(i=0; i<10; i++)
    {
        dev=marks[i]-avg;
        cout<<endl<<"Marks= " <<marks[i]<<"\tDeviation= "<<dev;
    }
    return 0;
}