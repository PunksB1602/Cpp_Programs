//Write a program to illustrate "member function of one class can be made friend of another class"
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
        cout<<"Enter marks in academic: ";
        cin>>acd_marks;
    }
    float CalculateTotalMarks(ExtraActivities);
};
class ExtraActivities
{
    private:
    float ex_marks;
    public:
    void GetExMarks()
    {
        cout<<"Enter Marks in extraactivities: ";
        cin>>ex_marks;
    }
    friend float Academic::CalculateTotalMarks(ExtraActivities);
};
float Academic::CalculateTotalMarks(ExtraActivities e)
{
    float total;
    total=acd_marks+e.ex_marks;
    return total;
}
int main()
{
    Academic a;
    ExtraActivities e;
    float m;
    a.GetMarks();
    e.GetExMarks();
    m=a.CalculateTotalMarks(e);
    cout<<"Total marks: "<<m;
}