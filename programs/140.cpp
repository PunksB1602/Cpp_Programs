//Write a program to convert an object of class Dollar to an object of class Rupees. Assume, the data members of class Dollar
//are dol & cent and of class Rupees are Rs and Paisa.Use $1=Rs.128 and $1=100cents.
/*Case1: Conversion routine is in class Dollar(i.e.Source class)
#include<iostream>
using namespace std;
class Rupees
{
    long Rs;
    float Paisa;
    public:
    Rupees()
    {
        Rs=0;
        Paisa=0;
    }
    Rupees(long r,float p)
    {
        Rs=r;
        Paisa=p;
    }
   void Display()
    {
        cout<<"Rs."<<Rs<<" and "<<Paisa<<" paisa";
    }
};
class Dollar
{
    int dol;
    float cent;
    public:
    Dollar()
    {
        dol=0;
        cent=0.0;
    }
    Dollar(int d,float c)
    {
        dol=d;
        cent=c;
    }
    void Display()
    {
        cout<<"$"<<dol<<" and "<<cent<<" cent";
    }
    operator Rupees()
    {
        long rr;
        float pp,total_rs;
        total_rs=128*(dol+cent/100);
        rr=(long)total_rs;
        pp=(total_rs-rr)*100;
        return Rupees(rr,pp);
    }
};
int main()
{
    Dollar d(4300,1.5);
    Rupees r;
    r=d;
    cout<<"In Dollar: ";
    d.Display();
    cout<<endl<<"In Rupees: ";
    r.Display();
}
*/
/*Case 2:Conversion routine is in class Rupees (i.e. Destination class)*/
#include<iostream>
using namespace std;
class Dollar
{
    int dol;
    float cent;
    public:
    Dollar()
    {
        dol=0;
        cent=0.0;
    }
    Dollar(int d,float c)
    {
        dol=d;
        cent=c;
    }
    void Display()
    {
        cout<<"$"<<dol<<" and "<<cent<<" cent";
    }
    int getDollar()
    {
        return dol;
    }
    float getCent()
    {
        return cent;
    }
};
class Rupees
{
    long Rs;
    float Paisa;
    public:
    Rupees()
    {
        Rs=0;
        Paisa=0;
    }
    Rupees(long r,float p)
    {
        Rs=r;
        Paisa=p;
    }
    Rupees(Dollar doll)
    {
        float total_rs;
        total_rs=128*(doll.getDollar()+doll.getCent()/100);
        Rs=(long)total_rs;
        Paisa=(total_rs-Rs)*100;
    }
    void Display()
    {
        cout<<"Rs."<<Rs<<" and "<<Paisa<<" paisa";
    }
};
int main()
{
    Dollar d(4300,1.5);
    Rupees r;
    r=d;
    cout<<"In Dollar: ";
    d.Display();
    cout<<endl<<"In Rupees: ";
    r.Display();
}
