#include<iostream>
using namespace std;
class Test
{
    int x,y;
    public:
    Test(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }
    Test &setx(int a)
    {
        x=a;
        return *this;
    }
    Test &sety(int b)
    {
        y=b;
        return *this;
    }
    void print(){
        cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main()
{
    Test obj;
    obj.setx(10).sety(20).print();
    return 0;
}
