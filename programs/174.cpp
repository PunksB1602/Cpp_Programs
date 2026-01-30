//Reinterpret cast operator
#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int(20);
    cout<<"First value= "<<*ptr<<endl;
    void *ptr2=reinterpret_cast<void*>(ptr);
    int *ptr3=reinterpret_cast<int*>(ptr2);
    cout<<"Final reinterpret cast value is: "<<*ptr3<<endl;
    return 0;
}