//Use of unsetf() function to clear already set flag.
#include<iostream>
using namespace std;
int main()
{
    cout.fill('*');
    cout<<endl<<"The output in right justified......."<<endl;
    cout.setf(ios::left,ios::adjustfield);
    cout.unsetf(ios::left);
    cout.width(30);
    cout<<"Hari Krishna Joshi";
}