//Write a program as your choice to use Multiple Inheritances.
#include<iostream>
using namespace std;
class AcademicActivities
{
    protected:
    float acd_total_marks;
    public:
    void ReadAcdMarks()
    {
        cout<<"Enter Total Marks in Exam: ";
        cin>>acd_total_marks;
    }
    void DisplayAcdMarks()
    {
        cout<<"Total Academic Marks is: "<<acd_total_marks<<endl;
    }
};
class ExtraActivities
{
    protected:
    float discipline_marks;
    float punctuality_marks;
    public:
    void ReadExtraMarks()
    {
        cout<<"Enter marks in Discipline: ";
        cin>>discipline_marks;
        cout<<"Enter marks in Punctulality: ";
        cin>>punctuality_marks;
    }
    void DisplayExtraMarks()
    {
        cout<<"Marks in Discipline: "<<discipline_marks<<endl;
        cout<<"Marks in Punctuality: "<<punctuality_marks;
    }
};
class Result: public AcademicActivities, public ExtraActivities
{
    float total_marks;
    public:
    void CalculateResult()
    {
        total_marks=acd_total_marks+discipline_marks+punctuality_marks;
    }
    void DisplayResult()
    {
        DisplayAcdMarks();
        DisplayExtraMarks();
        cout<<"\nTotal Marks: "<<total_marks;
    }
};
int main()
{
    Result r;
    r.ReadAcdMarks();
    r.ReadExtraMarks();
    r.CalculateResult();
    cout<<endl<<"********* Your Record is: ************"<<endl;
    r.DisplayResult();
}