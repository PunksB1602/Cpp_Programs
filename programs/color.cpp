#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, k);
    cout<<"Welcome to my world>";
    return 0;
}