#include<iostream>
using namespace std;
float area(float r, float pi=3.14)
{
    return pi*r*r;
}
int main(){
float radius;
cout<<"Enter radius:";
cin>>radius;
cout<<"Area of circle="<<area(radius);
return 0;
}
