  #include<iostream>
#include<cstring>
using namespace std;
class String
{
    char str[100];
public:
    String(char s[] = "")
    {
        strcpy(str,s);
    }
    friend String operator+(String,String);
     void display()
    {
        cout<<str<<endl;
    }
};
    String operator+(String s1,String s2)
    {
        String temp;
        strcpy(temp.str,s1.str);
        strcat(temp.str,s2.str);
        return temp;
    }


int main()
{
    String s1("Hello");
    String s2("World");

    String s3=s1+s2;
    cout<<"Concatenated string:";
    s3.display();
    return 0;
}
