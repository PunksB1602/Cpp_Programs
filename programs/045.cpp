//Write a program as your choice to illustrate the use of manipulators for formatting output.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n1=2059,n2=07, n3=16;
    cout<<"Name: Pankaj Bhatt"<<endl<<"Level: Bachelor"<<endl<<"Faculty: Electronics Engineering"
    <<endl<<"College: Thapathali Engineering Campus"<<endl<<"Roll Number: THA078BEI025";
    cout<<endl<<"Date of Birth: "<<"Year in B.S.="<<setw(5)<<n1<<" Month="<<setw(2)<<n2<<" Day="<<setw(3)<<n3;
    return 0;
}