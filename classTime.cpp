#include <iostream>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void print()
    {
        cout << "Time = " << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    Time t1, t2;

    t1.setTime(10, 20, 30);
    t2.setTime(5, 45, 15);

    cout << "First Time: ";
    t1.print();

    cout << "Second Time: ";
    t2.print();

    return 0;
}