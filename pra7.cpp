#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    int rollno;
    string name;
public:
    void get()
    {
        cout<<"Enter roll no. :";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
    }
};
class Exam : public Student
{
protected:
    float marks[5];
public:
    void getMarks()
    {
        cout<<"Enter marks of 5 subjects:"<<endl;
        for(int i=0;i<5;i++){
            cout<<"Subject"<<i+1<<":";
            cin>>marks[i];
        }
    }
};
class Result : public Exam
{
private:
    float total,average;
public:
    void calculate()
    {
        total=0;
        for(int i=0;i<5;i++)
        {
            total=total+marks[i];
        }
        average=total/5;
    }
    void display()
    {
        cout<<"Examination Result"<<endl;
        cout<<"Roll no.="<<rollno<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Total Marks="<<total<<endl;
        cout<<"Average="<<average<<endl;

    }
};
int main()
{
    Result r[5];
    for(int i=0;i<5;i++)
    {
    cout<<"Enter student details:"<<i+1<<endl;
    r[i].get();
    r[i].getMarks();
    r[i].calculate();
    }
    cout<<"All details of students:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Student="<<i+1<<endl;
        r[i].display();
    }
    return 0;
}
