#include<iostream>
using namespace std;
class Number
{
protected:
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter two positive numbers:";
        cin>>a>>b;

    }
};
class Multiply : public Number
{
public:
    void calculate()
    {
        cout<<"Multiplication="<<a*b<<endl;
    }
};
int main()
{
    Multiply m;
    m.getdata();
    m.calculate();
    return 0;
}
