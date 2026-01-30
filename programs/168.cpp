//Create a class called cricketer with member variables to represent name,age and no of matches played. From this class derive two classes:
//Bowler and Batsman. Bowler class has no. of wickets as member variable and Batsman class has no. of runs and centuries as member variables.
//Use appropriate memeber functions in all classes to road and display respective data.
#include<iostream>
using namespace std;
class Cricketer
{
    char name[20];
    int age,nom;
    public:
    void ReadCricketerData()
    {
        cout<<"Enter name,age and number of match played: ";
        cin>>name>>age>>nom;
    }
    void DisplayCricketerData()
    {
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Age: "<<age;
        cout<<endl<<"No of Match played: "<<nom; 
    }
};
class Bowler: public Cricketer
{
    int now;
    public:
    void ReadBowlerData()
    {
        ReadCricketerData();
        cout<<"Enter number of wickets: ";
        cin>>now;
    }
    void DisplayBowlerData()
    {
        DisplayCricketerData();
        cout<<endl<<"No. of Wickets: "<<now;
    }
};
class Batsman:public Cricketer
{
    int nor,noc;
    public:
    void ReadBatsmanData()
    {
        ReadCricketerData();
        cout<<endl<<"Enter no. of runs and centuries: ";
        cin>>nor>>noc;
    }
    void DisplayBatsmanData()
    {
        DisplayCricketerData();
        cout<<endl<<"No. of Runs: "<<nor;
        cout<<endl<<"No. of Centuries: "<<noc;
    }
};
int main()
{
    Bowler bow;
    Batsman bat;
    cout<<"Enter Record of Bowler: "<<endl;
    bow.ReadBowlerData();
    cout<<"Enter Record of Batsman: "<<endl;
    bat.ReadBatsmanData();
    cout<<endl<<"*******Bowler Record*********";
    bow.DisplayBowlerData();
    cout<<endl<<"*******Batsman Record*********";
    bat.DisplayBatsmanData();
}