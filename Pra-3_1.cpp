#include <iostream>
using namespace std;

class Student
{
    public:
    int Student_Id,Student_sem;
    string Student_name;
    float Student_cpi,Student_spi;
    void getdata()
    {
        cout<<"Enter ID = "<<endl;
        cin>>Student_Id;
        cout<<"Enter Semester = "<<endl;
        cin>>Student_sem;
        cout<<"Enter Name = "<<endl;
        cin>>Student_name;
        cout<<"Enter SPI = "<<endl;
        cin>>Student_spi;
        cout<<"Enter CPI = "<<endl;
        cin>>Student_cpi;
    }
    void display()
    {
        cout<<"Student ID = "<<Student_Id<<endl;
        cout<<"Student Semester = "<<Student_sem<<endl;
        cout<<"Student Name = "<<Student_name<<endl;
        cout<<"Student SPI = "<<Student_spi<<endl;
        cout<<"Student CPI = "<<Student_cpi<<endl;
    }
};
int main()
 {
    int n,i,j,searchId;
    cout<<"Enter no. of Student = "<<endl;
    cin>>n;
    Student s[50],temp;
    for(i=0;i<n;i++)
    {
        cout<<"Student = "<<i+1;
        s[i].getdata();
    }
    cout<<"Students whose CPI>=7.6 and CPI<=8.9 :"<<endl;
    for(i=0;i<n;i++)
    {
        if(s[i].Student_cpi>7.6 && s[i].Student_cpi<=8.9)
            s[i].display();
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].Student_spi>s[j].Student_spi)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<<"Student SPI in Ascending order = "<<endl;
    for(i=0;i<n;i++)
        s[i].display();
    cout<<"Student ID = "<<endl;
    cin>>searchId;
    for(i=0;i<n;i++)
    {
        if(s[i].Student_Id==searchId)
        {
            cout<<"Student Found = "<<endl;
            s[i].display();
            return 0;
        }
    }
    cout<<"Student NOT Found = "<<endl;
    return 0;
}
