#include <iostream>
using namespace std;

class Rectangle
{
private:
    float width, height;

public:
    void setData(float w, float h)
    {
        width = w;
        height = h;
    }

    float area()
    {
        return width * height;
    }

    void displayData()
    {
        cout << "Width = " << width << endl;
        cout << "Height = " << height << endl;
        cout << "Area = " << area() << endl;
    }
};

int main()
{
    Rectangle R1, R2;

    cout << "Object 1 Details:" << endl;
    R1.setData(5.5, 4.0);
    R1.displayData();

    cout << endl;

    cout << "Object 2 Details:" << endl;
    R2.setData(10.2, 3.7);
    R2.displayData();

    return 0;
}