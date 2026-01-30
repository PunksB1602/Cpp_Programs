//Write a program to overload =+(i.e. assignment operator).
#include<iostream>
using namespace std;
class Money
{
    private:
    int Rs,Paisa;
    public:
    Money()
    {
        Rs=0;
        Paisa=0;
    }
    Money(int r,int p)
    {
        Rs=r;
        Paisa=p;
    }
    void Display()
    {
        cout<<"Rs."<<Rs<<" "<<" Paisa "<<Paisa<<endl;
    }
    void ReadData()
    {
        cout<<"Rupees: ";
        cin>>Rs;
        cout<<"Paisa: ";
        cin>>Paisa;
    }
    void operator+=(Money m)
    {
        Rs=Rs+m.Rs;
        Paisa=Paisa+m.Paisa;
        if(Paisa>=100)
        {
            Paisa=Paisa-100;
            Rs=Rs+1;
        }
    }
};
int main()
{
    Money m1,m2;
    cout<<"Enter First Amount of Money: "<<endl;
    m1.ReadData();
    cout<<"Enter Second Amount of Money: "<<endl;
    m2.ReadData();
    cout<<"First Money is: ";
    m1.Display();
    cout<<"Second Money is: ";
    m2.Display();
    m1+=m2;
    cout<<"New value of first money i.e. m1 is: ";
    m1.Display();
}