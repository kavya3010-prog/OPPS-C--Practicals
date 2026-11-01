#include <iostream>
using namespace std;

class Max
{
    public:
    void max(int a, int b, int c)
    {
        int m;
        m=a;
        if(b>m)
            m=b;
        if(c>m)
            m=c;
        cout<<"Maximum Number = "<<m<<endl;
    }
    void max(string s1, string s2, string s3){
     string m=s1;
     if(s2>m)
        m=s2;
     if(s3>m)
        m=s3;
     cout<<"Maximum String = "<<m<<endl;
    }
};
int main()
{
    Max obj;
    int a,b,c;
    string s1,s2,s3;
    cout<<"Maximum number = "<<endl;
    cin>>a>>b>>c;

    obj.max(a,b,c);

    cout<<"Maximum string = "<<endl;
    cin>>s1>>s2>>s3;
    obj.max(s1,s2,s3);

    return 0;
}
