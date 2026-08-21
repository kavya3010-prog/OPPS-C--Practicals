#include <iostream>
using namespace std;

class Test
{
private:
    float mark;
    float spi;

public:
    void setdata();
    void DisplayData();
};

void Test::setdata()
{
    cout << "Enter Mark: ";
    cin >> mark;

    cout << "Enter SPI: ";
    cin >> spi;
}

void Test::DisplayData()
{
    cout << "Mark = " << mark << endl;
    cout << "SPI = " << spi << endl;
}

int main()
{
    Test t1, t2;

    cout << "Enter Details of Student 1" << endl;
    t1.setdata();

    cout << "\nEnter Details of Student 2" << endl;
    t2.setdata();

    cout << "\nStudent 1 Details" << endl;
    t1.DisplayData();

    cout << "\nStudent 2 Details" << endl;
    t2.DisplayData();

    return 0;
}