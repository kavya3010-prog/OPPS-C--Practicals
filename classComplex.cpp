#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    void getData()
    {
        cout << "Enter Real and Imaginary Part: ";
        cin >> real >> img;
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    void display()
    {
        cout << "Sum = " << real << " + " << img << "i";
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter First Complex Number\n";
    c1.getData();

    cout << "Enter Second Complex Number\n";
    c2.getData();

    c3 = c1.add(c2);

    c3.display();

    return 0;
}