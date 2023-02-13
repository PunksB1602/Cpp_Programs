//Create a class named DistanceF with data memebers:feet and inch and another class named DistanceM with data memebers:m and cm.
//Write a program to convert object of DistanceF class into object of another class DistanceM. Use 1meter=3.28 feet for conversion.
/*Option 1. When conversion routine is in source class(i.e. in class DistanceF)
#include<iostream>
using namespace std;
class DistanceM
{
    int m;
    float cm;
    public:
    DistanceM()
    {
        m=0;
        cm=0;
    }
    DistanceM(int mm,float cmm)
    {
        m=mm;
        cm=mm;
    }
    void Display()
    {
        cout<<m<<" m "<<cm<<" cm";
    }
};
class DistanceF
{
    int feet,inch;
    public:
    DistanceF()
    {
        feet=0;
        inch=0;
    }
    void ReadData()
    {
        cout<<"Enter feet value: ";
        cin>>feet;
        cout<<"Enter inch value: ";
        cin>>inch;
    }
    void Display()
    {
        cout<<feet<<"\' "<<inch<<"\"";
    }
    operator DistanceM()
    {
        int meter;
        float centi,total_meter;
        total_meter=(feet+inch/12.0)/3.33;
        meter=(int)total_meter;
        centi=(total_meter-meter)*100;
        return DistanceM(meter,centi);
    }
};
int main()
{
    DistanceF df;
    DistanceM dm;
    df.ReadData();
    dm=df;
    cout<<"The value in feet and inch: ";
    df.Display();
    cout<<endl<<"The value in meter and centimeter: ";
    dm.Display();
}
*/
/*When conversion routine is in destination class (i.e. in class DistanceM) */
#include<iostream>
using namespace std;
class DistanceF
{
    int feet,inch;
    public:
    DistanceF()
    {
        feet=0;
        inch=0;
    }
    void ReadData()
    {
        cout<<"Enter feet value: ";
        cin>>feet;
        cout<<"Enter inch value: ";
        cin>>inch;
    }
    void Display()
    {
        cout<<feet<<"\' "<<inch<<"\" ";
    }
    int getFeet()
    {
        return feet;
    }
    int getInch()
    {
        return inch;
    }
};
class DistanceM
{
    int m;
    float cm;
    public:
    DistanceM()
    {
        m=0;
        cm=0;
    }
    DistanceM(DistanceF df)
    {
        float total_meter;
        total_meter=(df.getFeet()+df.getInch()/12.0)/3.33;
        m=(int)total_meter;
        cm=(total_meter-m)*100;
    }
    void Display()
    {
        cout<<m<<"m "<<cm<<"cm";
    }
};
int main()
{
    DistanceF df;
    DistanceM dm;
    df.ReadData();
    dm=df;
    cout<<"The value in feet and inch: ";
    df.Display();
    cout<<endl<<"The value in meter and centimeter: ";
    dm.Display();
}