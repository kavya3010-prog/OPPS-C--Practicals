#include<iostream>
using namespace std;
inline float SI(float p,float r, float n)
{
return (p*r*n)/100;
}
int main(){
    float p,r,n,I;
cout<<"Enter values of p , r and n:";
cin>>p>>r>>n;
I=SI(p,r,n);
cout<<"Simple Interest="<<I<<endl;
return 0;
}
