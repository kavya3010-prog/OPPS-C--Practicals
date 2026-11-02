#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"Inside Function:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main(){
int x,y;
cout<<"Enter two numbers:";
cin>>x>>y;
cout<<"Before swapping: x="<<x<<"y="<<y<<endl;
swap(x,y);
cout<<"After swapping: x="<<x<<"y="<<y<<endl;
return 0;
}
