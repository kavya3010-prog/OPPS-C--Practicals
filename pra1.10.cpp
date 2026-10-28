#include<iostream>
using namespace std;
inline int largest(int a,int b, int c){
if(a>b && a>c)
    return a;
else if(b>c)
    return b;
else
    return c;
}
int main(){
int x,y,z;
cout<<"Enter three numbers:";
cin>>x>>y>>z;
cout<<"Largest number:"<<largest(x,y,z);
return 0;
}
