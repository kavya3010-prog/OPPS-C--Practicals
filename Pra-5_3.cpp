#include<iostream>
using namespace std;

class Demo
{
    static int count;
public:
    Demo()
    {
        count++;
    }
    static void showCount()
    {
        cout<<"Number of objects = "<<count<<endl;
    }
};
int Demo::count=0;
int main()
{
    Demo d1,d2,d3;
    Demo::showCount();
    return 0;
}
