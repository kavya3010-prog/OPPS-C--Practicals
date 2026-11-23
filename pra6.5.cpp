#include <iostream>
#include <cmath>
using namespace std;

class Polar;   // Forward declaration

class Rectangle
{
    float x, y;

public:
    Rectangle(float a = 0, float b = 0)
    {
        x = a;
        y = b;
    }

    // Conversion constructor
    Rectangle(Polar p);

    void display()
    {
        cout << "Rectangular Coordinates: ";
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // Give Polar access to private members
    friend class Polar;
};

class Polar
{
    float r, theta;

public:
    Polar(float a = 0, float b = 0)
    {
        r = a;
        theta = b;
    }

    // Conversion constructor
    Polar(Rectangle rec);

    void display()
    {
        cout << "Polar Coordinates: ";
        cout << "(" << r << ", " << theta << " degrees)" << endl;
    }

    // Give Rectangle access to private members
    friend class Rectangle;
};

// Polar to Rectangle
Rectangle::Rectangle(Polar p)
{
    float angle = p.theta * 3.14159 / 180;

    x = p.r * cos(angle);
    y = p.r * sin(angle);
}

// Rectangle to Polar
Polar::Polar(Rectangle rec)
{
    r = sqrt(rec.x * rec.x + rec.y * rec.y);

    theta = atan2(rec.y, rec.x) * 180 / 3.14159;
}

int main()
{
    // Polar to Rectangle
    Polar p(5, 53.13);

    cout << "Conversion from Polar to Rectangle:" << endl;
    p.display();

    Rectangle r = p;
    r.display();

    cout << endl;

    // Rectangle to Polar
    Rectangle rec(3, 4);

    cout << "Conversion from Rectangle to Polar:" << endl;
    rec.display();

    Polar pol = rec;
    pol.display();

    return 0;
}
