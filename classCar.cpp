#include <iostream>
using namespace std;

class Car
{
private:
    string company;
    int top_speed;

public:
    void setdata()
    {
        cout << "Enter Company Name: ";
        cin >> company;

        cout << "Enter Top Speed: ";
        cin >> top_speed;
    }

    void displaydata()
    {
        cout << "Company Name = " << company << endl;
        cout << "Top Speed = " << top_speed << " km/h" << endl;
    }
};

int main()
{
    Car c1, c2;

    cout << "Enter Details of Car 1" << endl;
    c1.setdata();

    cout << "\nEnter Details of Car 2" << endl;
    c2.setdata();

    cout << "\nCar 1 Details" << endl;
    c1.displaydata();

    cout << "\nCar 2 Details" << endl;
    c2.displaydata();

    return 0;
}