#include<iostream>
using namespace std;
class Number1
{
protected:
    int a;
public:
    void getA()
    {
        cout<<"Enter first positive number:";
        cin>>a;
    }
};
class Number2
{
protected:
    int b;
public:
    void getB()
    {
        cout<<"Enter second positive number:";
        cin>>b;
    }
};
class Multiply : public Number1, public Number2
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
    m.getA();
    m.getB();
    m.calculate();
    return 0;
}
