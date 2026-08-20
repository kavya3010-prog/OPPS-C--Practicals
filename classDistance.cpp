#include <iostream>
using namespace std;

class Distance
{
    float m, km;

public:
    void getdata()
    {
        cout << "Enter distance in metre: ";
        cin >> m;

        cout << "Enter distance in km: ";
        cin >> km;
    }

    void printdata()
    {
        cout << "\nMetre = " << m;
        cout << "\nKilometre = " << km;
    }

    void adddata(Distance x, Distance y)
    {
        m = x.m + y.m;
        km = x.km + y.km;
    }
};

int main()
{
    Distance D1, D2, D3;

    D1.getdata();
    D1.printdata();

    D2.getdata();
    D2.printdata();

    D3.adddata(D1, D2);

    cout << "\nAfter adding two object";
    D3.printdata();

    return 0;
}