//Write a program to display quantity,cost per piece and total cost of four items in tabular format. Use member functions of ios class for 
//formatting output.
#include<iostream>
using namespace std;
int main()
{
    int items[4]={5,7,1,8};
    int cost[4]={37,100,250,625};
    cout.width(7);
    cout<<"S.N.";
    cout.width(14);
    cout<<"Quantity";
    cout.width(20);
    cout<<"Cost/Piece";
    cout.width(12);
    cout<<"Total\\n";
    int sum=0;
    cout<<"\n  ------   ---------    ------------     ------------\n";
    for(int i=0;i<4;i++)
    {
        cout.width(7);
        cout<<i+1;
        cout.width(11);
        cout<<items[i];
        cout.width(17);
        cout<<cost[i];
        int value=items[i]*cost[i];
        cout.width(15);
        cout<<value<<endl;
        sum=sum+value;
    }
    cout<<"\nGrand Total=";
    cout<<sum;
}