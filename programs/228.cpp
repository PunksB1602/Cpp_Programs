//Write a program to illustrate the use of single catch block to catch different types of exceptions.
#include<iostream>
using namespace std;
int main()
{
    char msg[]="Divide by zero.......";
    int nums[]={1,2,3,4,10,20,30,40,50,90};
    int n,counter;
    try
    {
        cout<<"Enter a number for divisor: ";
        cin>>n;
        cout<<"How many results do you want?";
        cin>>counter;
        for(int i=0;i<counter;i++)
        {
            if(i>9) throw i;
            if(n==0) throw msg;
            cout<<"The quotient is: "<<nums[i]/n<<endl;
        }
    }
    catch(...)
    {
        cout<<"Exception Occurred";
    }
    return 0;
}