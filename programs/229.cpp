//Write a program to use nested try block.
#include<iostream>
using namespace std;
int main()
{
    float numerator,denominator,answer;
    try
    {
        cout<<"Enter two numbers: ";
        cin>>numerator>>denominator;
        if (denominator!=0)
        {
            answer=numerator/denominator;
            cout<<"ans="<<answer;
        }
        else
        {
            if (denominator==0)
            throw 0;
        }
    }
    catch(int e)
    {
        cout<<"Division by zero is not allowed! ";
        cout<<endl<<"Enter non-zero denominator.......";
        cin>>denominator;
        {
            if (denominator==0)
            throw 0;
            else
            {
                answer=numerator/denominator;
                cout<<"ans="<<answer;
            }
        }
        catch(int e)
        {
            cout<<e<<"is not allowed as divisor.......";
        }
    }
    return 0;
}