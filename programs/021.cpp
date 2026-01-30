//write a program to set and reset various flags using manipulators.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num=70.6776;
    cout<<"num in scientific notation= "<<setiosflags(ios::scientific)<<num;
    cout<<endl<<resetiosflags(ios::scientific)<<"With normal notation= "<<num;
    return 0;
}