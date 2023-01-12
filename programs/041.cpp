//Write a program to read temperature in Centigrade and convert into Fahrenheit.
#include<iostream>
using namespace std;
int main()
{
    float C,F;
    cout<<"Enter the temperature in Centigrade:\n ";
    cin>>C;
    F=(C*9/5)+32;
    cout<<"The temperatuere in Fahrenheit is: "<<F;
    return 0;
}