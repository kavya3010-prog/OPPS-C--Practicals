#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    void get(int x)
    {
        n = x;
    }

    void display()
    {
        cout << "Value of n is: " << n << endl;
    }

    friend void operator-(Num &n);
};

void operator-(Num &n)
{
    n.n = -n.n;
}

int main()
{
    Num n;

    n.get(10);

    cout << "Before Overloading:\n";
    n.display();

    -n;

    cout << "After Overloading:\n";
    n.display();

    return 0;
}