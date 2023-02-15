/*Create a class student with rno to represent RollNo as data member,getnumber() and putnumber() as member functions to read and display roll no
of a student. Create two derived classes Exam and sport from student class. The Exam class handles marks in exam and class sport handles score
received in sport activities. Finally, derive a fourth class Result from class Exam and sport to calculate total score. Write a program to read
rollno,marks in exam and sport and display total score using above classes. [Or write a program to illustrate the use of virtual base class.]*/
#include<iostream>
using namespace std;
class Student
{
    int rno;
    public:
    void getnumber()
    {
        cout<<"Enter Roll No: ";
        cin>>rno;
    }
    void putnumber()
    {
        cout<<"\n\n\tRoll No: "<<rno<<"\n";
    }
};
class Exam:virtual public Student
{
    public:
    int part1,part2;
    void getmarks()
    {
        cout<<"Enter Marks\n";
        cout<<"Part1: ";
        cin>>part1;
        cout<<"Part2: ";
        cin>>part2;
    }
    void putmarks()
    {
        cout<<"\tMarks Obtained:-\n";
        cout<<"\n\tPart1:"<<part1;
        cout<<"\n\tPart2:"<<part2;
    }
};
class sports:public virtual Student
{
    protected:
    int score;
    public:
    void getscore()
    {
        cout<<"Enter Sports Score: ";
        cin>>score;
    }
    void putscore()
    {
        cout<<"\n\tSports Score is: "<<score;
    }
};
class result:public Exam,public sports
{
    int total;
    public:
    void display()
    {
        total=part1+part2+score;
        putnumber();
        putmarks();
        putscore();
        cout<<"\n\tTotal Score: "<<total;
    }
};
int main()
{
    result obj;
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
}