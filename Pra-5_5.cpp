#include <iostream>
using namespace std;

class Factorial
{
    int n,fact;
public:
    Factorial(int x)
    {
        n=x;
        fact=1;
        for(int i=1;i<=n;i++)
            fact=fact*i;
    }
    Factorial(Factorial &obj)
    {
        n=obj.n;
        fact=obj.fact;
    }
    void display()
    {
        cout<<"Factorial = "<<fact<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter a Number = ";
    cin>>n;
    Factorial f1(n);
    Factorial f2 = f1;
    f2.display();
    return 0;
}
