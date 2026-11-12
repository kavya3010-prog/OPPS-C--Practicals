#include <iostream>
using namespace std;

class Bank
{
public:
    string name;
    int accNo;
    float balance, amount;

    void assign()
    {
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Account Number: "<<endl;
        cin>>accNo;
        cout<<"Enter Initial Balance: "<<endl;
        cin >> balance;
    }
    void deposit()
    {
        cout<<"Enter Deposit Amount: "<<endl;
        cin>>amount;
        balance=balance+amount;
    }
    void withdraw()
    {
        cout<<"Enter Withdrawal Amount: "<<endl;
        cin >> amount;
        if(amount<=balance)
        {
            balance=balance-amount;
            cout<<"Withdrawal Successful."<<endl;
        }
        else
        {
            cout<<"Insufficient Balance."<<endl;
        }
    }
    void display()
    {
        cout<<"\nName : "<<name<<endl;
        cout<<"Account Number : "<<accNo<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};
int main()
{
    Bank b[10];
    int n, i;

    cout<<"Enter Number of Account Holders: "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Account "<<i+1<<endl;
        b[i].assign();
    }
    for(i=0;i<n;i++)
    {
        cout<<"Deposit for Account "<<i+1<<endl;
        b[i].deposit();
    }
    for(i=0;i<n;i++)
    {
        cout<<"Withdraw from Account "<<i+1<<endl;
        b[i].withdraw();
    }
    cout<<"----- Account Details -----";
    for(i=0;i<n;i++)
    {
        b[i].display();
    }

    return 0;
}
