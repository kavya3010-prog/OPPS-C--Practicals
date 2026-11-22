 #include<iostream>
using namespace std;
class Complex
{
    int real,imag;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    Complex operator++()
    {
        ++real;
        return *this;
    }
    Complex operator++(int)
    {
        Complex temp=*this;
        ++imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex ComplexNo(2,3);
    cout<<"Original Complex Number:";
    ComplexNo.display();
    ++ComplexNo;
    cout<<"After prefix:";
    ComplexNo.display();
    ComplexNo++;
    cout<<"After postfix:";
    ComplexNo.display();
    return 0;

}
