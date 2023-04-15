#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<string.h>
#include<dos.h>
#include<time.h>
#include<ctime>


using namespace std;


class first
{
	
	public:
		
		struct userdata
		{
			char name[200];
			char pob[100];
			char sex;
		} d1;
		
		
		struct birthdate
		{
			int year;
			int month;
			int day;
			int age;
		}b1 ;
		
		struct times
		{
		int year;
		int month;
		int day;	
		}t1;
		
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
		void horoscope();
		void calculations(int,int);
		
	};
	
	
	void first::blankscreen()
	{
		cout<<"\n ";
		time_t clc=time(0);
		char *dateandtime=ctime(&clc);
		cout<<setw(120)<<dateandtime;
		tm *lt=localtime(&clc);
		t1.year=1900 + lt->tm_year;
		b1.age=t1.year-b1.year;
		cout<<"\n\n\n\n\n\n";
	cout<<setw(70)<<"Press any key to continue.....";
	getch();
	}
	
	
	void first::selectionscreen()
	{
	   // system("cls");	
		cout<<"Here are the predictions on different aspects of your life"<<endl;
		cout<<"1 : Personality"; 
		cout<<setw(6)<<"";
		cout<<"2 : Love Life"<<endl;
		cout<<"3: Career";  
		cout<<setw(6)<<"";       
        cout<<"4 : Lucky Charms"<<endl;
		cout<<"5: Health"<<endl;
	}
	
	
	void first::userinput()
	{
		system("cls");
		cout<<"\n \n \n";
		cout<<setw(80)<<"***********************************************"<<endl;
		cout<<"\n \n \n";
		cout<<setw(70)<<" Welcome!   Registration Details"<<endl;
		cout<<"\n \n \n";
		cout<<setw(80)<<"***********************************************"<<endl;
		cout<<"\n \n \n \n ";
		cout<<"\n \n \n ";
		cout<<"======================================================================================================================="<<endl;
		cout<<endl;
		cout<<" FULL NAME : ";
		gets(d1.name);
		cout<<setw(80)<<"  Date Of Birth   "<<endl;
		cout<<setw(80)<<"  Year : ";
		cin>>b1.year;
		cout<<setw(80)<<"  Month : ";
		cin>>b1.month;
		cout<<setw(80)<<"  Day : ";
		cin>>b1.day;
		
		cout<<" Place of birth:  ";
	    cin>>d1.pob;
		cout<<setw(80)<<"   Enter your Sex  M/F :    ";
		d1.sex=getche();
		
		cout<<setw(80)<<"\n \n   \n   ......Press any key to continue";
		cout<<"\n \n";
		cout<<"=======================================================================================================================";
		getch();
		calculations(this->b1.month,this->b1.day);
		
		}
	
	       
	void first::calculations(int month,int day)
	       {
	       	
		if((b1.month==3&&b1.day>=21)||(b1.month==4&&b1.day<=19))
            aries(month,day);
        else if((b1.month==4&&b1.day>=20)||(b1.month==5&&b1.day<=20))
            taurus(month,day);
        else if((b1.month==5&&b1.day>=21)||(b1.month==6&&b1.day<=20))
            gemini(month,day);
        else if((b1.month==6&&b1.day>=21)||(b1.month==7&&b1.day<=22))
            cancer(month,day);
        else if((b1.month==7&&b1.day>=23)||(b1.month==8&&b1.day<=22))
            leo(month,day);
        else if((b1.month==8&&b1.day>=23)||(b1.month==9&&b1.day<=22))
            virgo(month,day);
        else if((b1.month==9&&b1.day>=23)||(b1.month==10&&b1.day<=22))
            libra(month,day);
        else if((b1.month==10&&b1.day>=23)||(b1.month==11&&b1.day<=21))
            scorpio(month,day);
        else if((b1.month==11&&b1.day>=22)||(b1.month==12&&b1.day<=21))
            saggitarius(month,day);
        else if((b1.month==12&&b1.day>=22)||(b1.month==1&&b1.day<=19))
            capricon(month,day);
        else if((b1.month==1&&b1.day>=20)||(b1.month==2&&b1.day<=18))
            aquarius(month,day);
        else if((b1.month==2&&b1.day>=19)||(b1.month==3&&b1.day<=20))
            pisces(month,day);
        else
		cout<<"Character you have entered is Invalid";    
        }
			     	 
		   
	       
	
	int main()
    	{
    		
					
		first obj1;
		obj1.blankscreen();
		obj1.userinput();

		obj1.selectionscreen();
		return 0;
	}