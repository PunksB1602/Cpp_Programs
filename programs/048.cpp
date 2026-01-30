//Write a program to read a sentence from user and display it in uppercase letters.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    int i;
    cout<<"Enter the sentence: ";
    cin.getline(s,100);
      for(i=0;i<=strlen(s);i++) 
      { 
      if(s[i]>=97 && s[i]<=122)//ASCII value of a to z(lowercase chars) ranges from 97 to 122 
      {
		s[i]=s[i]-32;
      }
      }
    cout<<"Uppercase form is: "<<s;
    return 0;
}
