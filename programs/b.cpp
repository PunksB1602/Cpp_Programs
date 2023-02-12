#include<iostream>
using namespace std;
class complex{
const float real = 3.0;
float imag = 2.0;
public:
void displayreal() const;
void displayimag();
};
void complex::displayreal() const{
cout << real<<endl;
}
void complex::displayimag() {
cout << imag <<endl;
}
int main() {
complex c;
const complex c2;
c.displayreal();
c.displayimag();
c2.displayreal();
c2.displayimag(); //error as cont obj can call only cont 
}
