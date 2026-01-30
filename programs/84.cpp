//Write a program which has class Distance with data members feet and inch of appropriate type. Define a member function of the class
//to add two distances expressed in feet and inch and return sum in main program.
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    float inches;
    public:
    void Read();
    Distance Add(Distance);
    void Display();
};
void Distance:: Read()
{
    cout<<"\nFeet: ";
    cin>>feet;
    cout<<"\nInches: ";
    cin>>inches;
}
void Distance::Display()
{
    cout<<"The sum is:\t";
    cout<<feet<<"\'-"<<inches<<'\"';
}
Distance Distance::Add(Distance d)
{
    Distance sum;
    sum.inches=inches+d.inches;
    if(sum.inches>=12)
    {
        sum.inches-=12;
        sum.feet=1;
    }
    sum.feet+=(feet+d.feet);
    return(sum);
}
int main()
{
    Distance d1,d2,d3;
    cout<<"\nEnter first distance: ";
    d1.Read();
    cout<<"\nEnter second distance: ";
    d2.Read();
    d3=d1.Add(d2);
    d3.Display();
}