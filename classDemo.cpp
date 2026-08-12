#include <iostream>
using namespace std;

class Demo
{
public:
    void display(int a)
    {
        cout << "Integer = " << a << endl;
    }

    void display(float b)
    {
        cout << "Float = " << b << endl;
    }

    void display(int a, int b)
    {
        cout << "Addition = " << a + b << endl;
    }
};

int main()
{
    Demo d;

    d.display(10);
    d.display(12.5f);
    d.display(20, 30);

    return 0;
}