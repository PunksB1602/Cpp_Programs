//Write a program in C++ to allocate memory for n fractional numbers using new operator.
//Store n number in allocated memory by reading from user and display the numbers in ascending order.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j;
    float *p,temp;
    cout<<"How many numbers are there? ";
    cin>>n;
    cout<<"Enter "<<n<< " numbers: "<<endl;
    p=new float[n];
    for(i=0;i<n;i++)
    cin>>*(p+i);
    {
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if (*(p+i)>*(p+j))
                {
                    temp=*(p+i);
                    *(p+i)=*(p+j);
                    *(p+j)=temp;
                }
            }
        }
    }
    cout<<"\nThe numbers in ascending order:\n ";
    for(i=0;i<n;i++) 
    cout<<*(p+i)<<"\t";
    delete[]p;
    return 0;
}