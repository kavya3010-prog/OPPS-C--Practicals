#include<iostream>
using namespace std;
int main(){
int n,temp,rem,sum=0;
cout<<"Enter a number=";
cin>>n;
temp=n;
while(temp>0){
    rem=temp%10;
    sum+=rem*rem*rem;
    temp/=10;
}
if(sum==n)
    cout<<"Armstrong Number";
else
    cout<<"Not Armstrong Number";
return 0;
}
