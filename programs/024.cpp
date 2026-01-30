//Write a program define an enumerators 'Days' with the name of seven days as enumerated-list.
//Read an integer value from user and display message "Holiday" if input value is 1 or 7 otherwise "Working Day".
#include<iostream>
using namespace std;
int main()
{
    enum Days{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    Days d;
    int j;
    cout<<"Please enter the day of the week (1 to 7): ";
    cin>>j;
    d=Days(j);
    if(d==Sunday||d==Saturday)
    cout<<"Enjoy___Today is holiday"<<endl;
    else 
    cout<<"Sorry___Working Day"<<endl;
    return 0;
}
