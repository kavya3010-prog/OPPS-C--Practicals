#include<iostream>
using namespace std;
int main(){
int a[10],sum=0 ;
for(int i=0; i<6 ; i++){
       cout<<"Enter marks of 6 subjects"<<i+1<<":"<<endl;
        cin>>a[i];
  sum+=a[i];
    }
    cout<<"Sum of 6 subjects="<<sum;
return 0;
}
