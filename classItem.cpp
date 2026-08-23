#include <iostream>
using namespace std;

class Item
{
    int itemid;
    string itemname;
    float itemprice;

public:

    // Function to take input
    void getdata()
    {
        cout << "Enter Item ID: ";
        cin >> itemid;

        cout << "Enter Item Name: ";
        cin >> itemname;

        cout << "Enter Item Price: ";
        cin >> itemprice;
    }

    // Function to display data
    void display()
    {
        cout << "\nItem ID    : " << itemid;
        cout << "\nItem Name  : " << itemname;
        cout << "\nItem Price : " << itemprice << endl;
    }

    // Function to return price
    float getprice()
    {
        return itemprice;
    }
};

int main()
{
    Item obj[10];
    int n;
    float sum = 0;

    cout << "Enter number of items: ";
    cin >> n;

    // Input item details
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Item " << i + 1 << ":\n";
        obj[i].getdata();
    }

    // Calculate total price
    for(int i = 0; i < n; i++)
    {
        sum = sum + obj[i].getprice();
    }

    cout << "\nTotal Price = " << sum << endl;

    // Display all item information if sum > 500
    if(sum > 500)
    {
        cout << "\nAll Item Information:\n";

        for(int i = 0; i < n; i++)
        {
            obj[i].display();
        }
    }
    else
    {
        cout << "\nTotal price is not greater than 500.";
    }

    return 0;
}