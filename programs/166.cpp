//Write a program to use constructor in base classes in case of multiple inheritances.
#include<iostream>
using namespace std;
class AcademicActivities
{
    protected:
    float acd_total_marks;
    public:
    AcademicActivities()
    {
        acd_total_marks=0;
    }
    AcademicActivities(float amarks)
    {
        acd_total_marks=amarks;
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
    ExtraActivities()
    {
        discipline_marks=0;
        punctuality_marks=0;
    }
    ExtraActivities(float d,float p)
    {
        discipline_marks=d;
        punctuality_marks=p;
    }
    void DisplayExtraMarks()
    {
        cout<<"Marks in Discipline: "<<discipline_marks<<endl;
        cout<<"Marks in Punctuality: "<<punctuality_marks;
    }
};
class Result:public AcademicActivities,public ExtraActivities
{
    float total_marks;
    public:
    Result(float acd_mark,float d_mark,float p_mark):AcademicActivities(acd_mark),ExtraActivities(d_mark,p_mark)
    {
    }
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
    Result r(67.5,4.5,8.0);
    r.CalculateResult();
    cout<<endl<<"*********Your Record is:*********"<<endl;
    r.DisplayResult();
}