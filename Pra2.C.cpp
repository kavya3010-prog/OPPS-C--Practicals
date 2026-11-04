#include<iostream>
#include<cmath>
using namespace std;

class Area{
public:
    void area(float b, float h)
    {
        cout<<"Area of Right Angle Triangle ="<<0.5*b*h<<endl;
    }

    void area(float a)
    {
        cout<<"Area of Equilateral triangle="<<(sqrt(3)/4)*a*a<<endl;
    }
    void area(double equalSide, double base)
    {
        float height = sqrt(equalSide * equalSide - (base * base)/4);
        cout<<"Area of Isosceles Triangle="<<0.5*base*height<<endl;
    }
};

int main()
{
    Area obj;
    obj.area(10.0f,5.0f);
    obj.area(6.0f);
    obj.area(5.0f,6.0f);
    return 0;

}
