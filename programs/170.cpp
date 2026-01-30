/*Assume that a bank maintains two kinds of accounts for customers, one called as savings account and the other as current account.
The savings account provides interest and the current account doesn't provide interest. Current account holders should also maintain
a minimum balance and if the balance falls below this level, a service charge is imposed. Create a class account that stores customers name,
account number and type of account. From this, derive the classes Saving and Current to make them more specific to their requirements. Include 
necessary member function in order to achieve the following tasks:
a) Accept deposit from a customer and update the balance.
b) Display the balance.
c) Compute and deposit interest.
d) Permit withdrawal and update the balance.
e) Check for the minimum balance, impose penalty, necessary, and update balance. */
#include<iostream>
#include<stdlib.h>
using namespace std;
class Account
{
    protected:
    char name[20];
    int AccNo;
    char AccType;
    public:
    void GetAccountInfo()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Account No.: ";
        cin>>AccNo;
        cout<<"Enter Account Type C for current and S for savings: ";
        cin>>AccType;
    }
    void DisplayAccountInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account No.: "<<AccNo<<endl;
        cout<<"Account Type: "<<AccType<<endl;
    }
};
class Current:public Account
{
    float balance;
    public:
    void DisplayBalance()
    {
        cout<<endl<<"Your saving balance is: "<<balance;
    }
    void Deposit()
    {
        float amount;
        cout<<endl<<"Enter deposit amount: ";
        cin>>amount;
        balance=balance+amount;
    }
    void Withdraw()
    {
        float amount;
        cout<<"Enter amount to be withdrawn: ";
        cin>>amount;
        if(amount>balance)
        cout<<"No sufficient balance.......";
        else
        {
        balance=balance-amount;
        if(balance<10000)
        {
            cout<<"You must have at least Rs.10000 ";
            cout<<endl<<"10% penalty will be imposed.......";
            balance=balance-amount*0.1;
        }
        }
    }
};
class Saving:public Account
{
    static float balance;
    public:
    void DisplayBalance()
    {
        cout<<endl<<"Your current balance is: "<<balance;
    }
    void Deposit()
    {
        float amount;
        cout<<endl<<"Enter deposit amount: ";
        cin>>amount;
        balance=balance+amount;
        DisplayBalance();
    }
    void Withdraw()
    {
        float amount;
        cout<<"Enter amount to be withdrawn: ";
        cin>>amount;
        if(amount>balance)
        cout<<"No sufficient balance.........";
        else
        balance=balance-amount;
        DisplayBalance();
    }
};
void Menu()
{
    cout<<endl<<"*************Menu***************";
    cout<<endl<<"1-->Deposit Amount";
    cout<<endl<<"2-->Withdraw Amount";
    cout<<endl<<"3-->Display Balance";
    cout<<endl<<"4-->Display Accouunt Information";
    cout<<endl<<"5-->Exit";
}
int main()
{
    Saving sav;
    Current cur;
    char AccType;
    int option;
    cout<<"Enter account type: ";
    cin>>AccType;
    if(AccType=='C')
    {
        while(1)
        {
            Menu();
            cin>>option;
            switch(option)
            {
                case 1:
                cur.Deposit();
                break;
                case 2:
                cur.Withdraw();
                break;
                case 3:
                cur.DisplayBalance();
                case 4:
                cur.DisplayAccountInfo();
                break;
                case 5:
                exit(1);
                default:
                cout<<"Invalid Option.......";
            }
        }
    }
    else
    {
        while(1)
        {
            Menu();
            cin>>option;
            switch(option)
            {
                case 1:
                sav.Deposit();
                break;
                case 2:
                sav.Withdraw();
                break;
                case 3:
                sav.DisplayBalance();
                break;
                case 4:
                sav.DisplayAccountInfo();
                break;
                case 5:
                exit(1);
                default:
                cout<<"Invalid Option........";
            }
        }
    }
}
