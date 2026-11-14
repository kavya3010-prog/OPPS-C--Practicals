#include <iostream>
using namespace std;

class Time
{
    int hr,min;
public:
    void getTime()
    {
        cout<<"Enter Hours & Minute : "<<endl;
        cin>>hr>>min;
    }
    Time add(Time t)
    {
        Time temp;
        temp.hr=hr+t.hr;
        temp.min=min+t.min;
        if(temp.min>=60)
        {
            temp.hr = temp.hr + (temp.min/60);
            temp.min = temp.min % 60;
        }
        return temp;
    }
    void display()
    {
        cout<<"Total Time : "<<endl<<"Hours = "<<hr<<endl<<"Minutes = "<<min<<endl;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.getTime();
    t2.getTime();
    t3=t1.add(t2);
    t3.display();
    return 0;
}
