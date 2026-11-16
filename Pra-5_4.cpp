#include <iostream>
using namespace std;

class Prime
{
public:
    Prime(int n)
    {
        int i,flag=1;
        if(n<=1)
            flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<n<<" Is Prime"<<endl;
        else
            cout<<n<<" Is Not Prime"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    Prime p(n);
    return 0;
}
