#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    void getData()
    {
        cout << "Enter Real Part: ";
        cin >> real;

        cout << "Enter Imaginary Part: ";
        cin >> imag;
    }

    void printData()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    void addData(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main()
{
    Complex C1, C2, C3;

    cout << "Enter First Complex Number:" << endl;
    C1.getData();

    cout << "\nEnter Second Complex Number:" << endl;
    C2.getData();

    C3.addData(C1, C2);

    cout << "\nFirst Complex Number: ";
    C1.printData();

    cout << "Second Complex Number: ";
    C2.printData();

    cout << "Sum of Two Complex Numbers: ";
    C3.printData();

    return 0;
}