//Write a C++ program to arrange given n numbers in ascending order using the concept of array.
#include <iostream>
using namespace std;
int main()
{
    int p[50],i, j, n, temp;
    cout << "How many numbers are there? ";
    cin >> n;
   cout<<"Enter "<<n<< " numbers: "<<endl;
    for(i=0;i<n;i++)
    cin>>p[i];
        {
             for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
        }
    cout << "Elements sorted in the ascending order are: " << endl;
    for (i=0;i<n;i++)
    cout <<p[i]<<"\t";   
    return 0;
}