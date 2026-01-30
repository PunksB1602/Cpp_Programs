//Write a program to illustrate the use of typeid() operator.
#include<iostream>
using namespace std;
int main()
{
int *a;
double *b;
cout<<"The type of a is: "<<typeid(a).name()<<endl;
cout<<"The type of c is: "<<typeid(b).name()<<endl;
return 0;
}
