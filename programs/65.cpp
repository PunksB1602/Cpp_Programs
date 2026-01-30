//Create a function which accepts a character through argument as call by reference
//and convert into uppercase if it in lowercase and vice versa.
#include<iostream>
using namespace std;
void conversion(char *c)
{
    if(*c>=65 && *c<=90)
    *c+=32;
    else if(*c>=97 && *c<=122)
    *c-=32;
}
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>&ch;
    conversion(&ch);
    cout<<"The equivalent character is "<<&ch;
    return 0;
}