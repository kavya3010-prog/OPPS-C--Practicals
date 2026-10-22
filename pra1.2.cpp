#include<iostream>
using namespace std;
int main(){
float a,b;
char op;
cout<<"Enter two numbers:"<<endl;
cin>>a>>b;
cout<<"Enter operator:"<<endl;
cin>>op;
switch(op){
    case '+': cout <<"Result="<<a+b;
    break;
     case '-': cout <<"Result="<<a-b;
    break;
     case '*': cout <<"Result="<<a*b;
    break;
     case '/' :
        if(b!=0)
            cout<<"Result="<<a/b;

        else
            cout<<"Division is not possible.";
        break;
        default:
return 0;
}
}
