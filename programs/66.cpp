//Write a function named TempConversion() with void return type which accepts temperature value in centigrade
//as reference variable(i.e. call by reference) and change this value in Fahrenheit value.
//Display this converted value in main() function.
#include<iostream>
using namespace std;
int TempConversion(float &c)
{
    float f;
    f=(c*9/5)+32;
    return f;
}
int main()
{
    float C,F;
    cout<<"Enter the temperature in Centigrade: ";
    cin>>C;
    F = TempConversion(C);
    cout<<"The equivalent temperature in Fahrenheit is: "<<F;
    return 0;
}