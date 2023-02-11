//Write a program which has two classes: Academic and ExtraActivities which have own data members to store academic and extra activities marks
//respectively.Define independent function which calculates total marks(i.e. academic marks of Academic Class and extra activities marks of
//ExtraActivities class)
//Or Write a program to add private data members of two classes using a non-member function.
#include<iostream>
using namespace std;
class ExtraActivities;
class Academic
{
    private:
    float acd_marks;
    public:
    void GetMarks()
    {
        cout<<"Enter marks in exam: ";
        cin>>acd_marks;
    }
    friend float CalculateTotalMarks(Academic,ExtraActivities);
};
class ExtraActivities
{
    private:
    float ex_marks;
    public:
    void GetExMarks()
    {
        cout<<"Enter marks in extra activities:";
        cin>>ex_marks;
    }
    friend float CalculateTotalMarks(Academic,ExtraActivities);
};
float CalculateTotalMarks(Academic ad,ExtraActivities ex)
{
    float total;
    total=ad.acd_marks+ex.ex_marks;
    return total;
}
int main()
{
    Academic a;
    ExtraActivities e;
    float m;
    a.GetMarks();
    e.GetExMarks();
    m=CalculateTotalMarks(a,e);
    cout<<"Total marks: "<<m;
}