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
    String operator+(String s)
    {
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str,str);
        return temp;
    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main()
{
    String s1("Hello");
    String s2("World");

    String s3=s1+s2;
    cout<<"Concatenated string:";
    s3.display();
    return 0;
}
