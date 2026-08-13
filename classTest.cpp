#include <iostream>
using namespace std;

class Test
{
private:
    int mark;
    float spi;

public:
    void setData()
    {
        cout << "Enter Mark: ";
        cin >> mark;

        cout << "Enter SPI: ";
        cin >> spi;
    }

    void DisplayData()
    {
        cout << "Mark = " << mark << endl;
        cout << "SPI = " << spi << endl;
    }
};

int main()
{
    Test o1, o2;

    cout << "Enter Details of Student 1" << endl;
    o1.setData();

    cout << "\nEnter Details of Student 2" << endl;
    o2.setData();

    cout << "\nStudent 1 Details" << endl;
    o1.DisplayData();

    cout << "\nStudent 2 Details" << endl;
    o2.DisplayData();

    return 0;
}