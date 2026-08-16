#include <iostream>
using namespace std;

inline float SI(float p, float r, float n)
{
    return (p * r * n) / 100;
}

int main()
{
    float p, r, n;

    cout << "Enter Principal Value: ";
    cin >> p;

    cout << "Enter Rate: ";
    cin >> r;

    cout << "Enter Time: ";
    cin >> n;

    cout << "Simple Interest = " << SI(p, r, n);

    return 0;
}