#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class first
{
    char name[100],pob[100];
    int dob;
    public:

        void blankscreen();
        void firstscreen();
        void userinput();
        void selectionscreen();
        void selection();
        void luckycharms();
        void career();
        void lovelife();
        void personality();
        void interests();
        void health();

    };


    void first::blankscreen()
    {
    cout<<"Press any key to continue.....";
    getch();
    }


    void first::selectionscreen()
    {
        system("cls");
        cout<<"Here are the predictions on different aspects of your life"<<endl;
        cout<<"1 : Personality"; 
        cout<<setw(6)<<"";
         cout<<"2 : Love Life"<<endl;
        cout<<"3: Career";
        cout<<setw(6)<<"";       cout<<"4 : Lucky Charms"<<endl;
        cout<<"5: Health"<<endl;
    }


    void first::userinput()
    {
        system("cls");
        cout<<"Enter your full name"<<endl;
        cin>>name;
        cout<<"Enter your date of birth in DD-MM-YYYY  format"<<endl;
        cin>>dob;
        cout<<"Enter your place of birth "<<endl;
        cin>>pob;


        }



    int main()
    {
        first obj1;
        obj1.blankscreen();

        obj1.selectionscreen();
        return 0;
    }