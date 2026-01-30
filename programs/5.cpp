//Write a program to illustrate the use of extraction operator to get input from the user.
#include<iostream>
using namespace std;
int main()
{
    char msg[20];
    cout<<"Enter some text: ";
    cin>>msg;
    cout<<"Your entered message is:"<<msg;
    return 0;
}