#include<iostream>
using namespace std;
class Number
{
    int n;
public:
    Number(int x=0)
    {
        n=x;
    }
    void operator++()
    {
        ++n;
    }
    void operator++(int)
    {
        n++;
    }
    void operator--()
    {
        --n;
    }
    void operator--(int)
    {
        n--;
    }
    void display()
    {
        cout<<" Value="<<n<<endl;
    }
};
int main()
{
    Number obj(10);
    cout<<"Initial Value:";
    obj.display();
    ++obj;
    cout<<"After prefix ++:";
    obj.display();
    obj++;
    cout<<"After postfix ++:";
    obj.display();
    --obj;
    cout<<"After prefix --:";
     obj.display();
     obj--;
     cout<<"After postfix --:";
    obj.display();
    return 0;
}
