#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
protected:
    string name;
    int accNo;
    float balance;

public:
    virtual void getdata()
    {
        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    virtual void display()
    {
        cout << "\nAccount Holder Name: " << name;
        cout << "\nAccount Number: " << accNo;
        cout << "\nBalance: " << balance << endl;
    }

    virtual void calculateInterest()
    {
        cout << "Interest = " << balance * 0.02 << endl;
    }
};

class SavingAccount : public BankAccount
{
    float interestRate;

public:
    void getdata()
    {
        BankAccount::getdata();

        cout << "Enter Interest Rate: ";
        cin >> interestRate;
    }

    void display()
    {
        BankAccount::display();

        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    void calculateInterest()
    {
        float interest = balance * interestRate / 100;

        cout << "Saving Account Interest: "
             << interest << endl;
    }
};

class CurrentAccount : public BankAccount
{
    float interestRate;

public:
    void getdata()
    {
        BankAccount::getdata();

        cout << "Enter Interest Rate: ";
        cin >> interestRate;
    }

    void display()
    {
        BankAccount::display();

        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    void calculateInterest()
    {
        float interest = balance * interestRate / 100;

        cout << "Current Account Interest: "
             << interest << endl;
    }
};

class FixDepositAccount : public BankAccount
{
    int period;
    float interestRate;

public:
    void getdata()
    {
        BankAccount::getdata();

        cout << "Enter Fixed Deposit Period (years): ";
        cin >> period;

        cout << "Enter Interest Rate: ";
        cin >> interestRate;
    }

    void display()
    {
        BankAccount::display();

        cout << "FD Period: " << period << " years" << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    void calculateInterest()
    {
        float interest = balance * interestRate * period / 100;

        cout << "Fixed Deposit Interest: "
             << interest << endl;
    }
};

int main()
{
    int choice;

    SavingAccount s;
    CurrentAccount c;
    FixDepositAccount f;

    BankAccount *ptr;

    cout << "1. Saving Account" << endl;
    cout << "2. Current Account" << endl;
    cout << "3. Fixed Deposit Account" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            ptr = &s;

            cout << "\nEnter Saving Account Details\n";
            ptr->getdata();

            cout << "\nSaving Account Details\n";
            ptr->display();

            ptr->calculateInterest();
            break;

        case 2:
            ptr = &c;

            cout << "\nEnter Current Account Details\n";
            ptr->getdata();

            cout << "\nCurrent Account Details\n";
            ptr->display();

            ptr->calculateInterest();
            break;

        case 3:
            ptr = &f;

            cout << "\nEnter Fixed Deposit Account Details\n";
            ptr->getdata();

            cout << "\nFixed Deposit Account Details\n";
            ptr->display();

            ptr->calculateInterest();
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}