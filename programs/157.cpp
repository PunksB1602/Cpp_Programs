//Write a program to use multi-level inheritance.
#include<iostream>
using namespace std;
class Student
{
    private:
    int roll;
    public:
    void GetRoll()
    {
        cout<<"Enter Roll: ";
        cin>>roll;
    }
    void DisplayRoll()
    {
        cout<<"Roll: "<<roll<<endl;
    }
};
class Examination:public Student
{
    protected:
    float subject1,subject2;
    public:
    void GetMarks()
    {
        cout<<"Enter marks in first subject: ";
        cin>>subject1;
        cout<<"Enter marks in second subject: ";
        cin>>subject2;
    }
    void DisplayMarks()
    {
        cout<<"Marks in First subject: "<<subject1<<endl;
        cout<<"Marks in second subject: "<<subject2<<endl;
    }
};
class Result:public Examination
{
    float total;
    public:
    void CalculateResult()
    {
        total=subject1+subject2;
    }
    void DisplayResult()
    {
        cout<<"Total Marks: "<<total;
    }
};
int main()
{
    Result r1;
    r1.GetRoll();
    r1.GetMarks();
    r1.CalculateResult();
    cout<<"----The Record of the student----"<<endl;
    r1.DisplayRoll();
    r1.DisplayMarks();
    r1.DisplayResult();
}