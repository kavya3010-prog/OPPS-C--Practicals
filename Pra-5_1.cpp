  #include<iostream>
using namespace std;

//write a program to do addition of times object
//write a program to design a class having static member function named showCount() which has property of displaying number of objects created of class
//write program to check whether given number is prime or not using constructor
//write a program calculate factorial of given number using copy constructor

class Number
{
    int num;
public:
    void getdata()
    {
        cout<<"Enter a number : "<<endl;
        cin>>num;
    }
    Number operator+(Number obj)
    {
        Number temp;
        temp.num=num+obj.num;
        return temp;
    }
    void display()
    {
        cout<<"Sum = "<<num<<endl;
    }
};
int main()
{
    Number n1,n2,n3;
    n1.getdata();
    n2.getdata();
    n3=n1+n2;
    n3.display();
    return 0;
}
