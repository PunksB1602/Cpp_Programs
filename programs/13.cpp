//Write a program to read two 2*3 matrices and display their sum
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[2] [3],b[2][3],sum[2][3],i,j;
    int m=2,n=3;
    cout<<"Enter first matrix of size 2*3 row by column: ";
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];
    cout<<"Enter second matrix of size 2*3 row by column: ";
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>b[i][j];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    sum[i][j]=a[i][j]+b[i][j];
    cout<<endl<<"The sum of matrices is: "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<setw(6)<<sum[i][j];
        }
        cout<<endl;
    }
    return 0;
}