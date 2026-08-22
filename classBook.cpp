#include <iostream>
using namespace std;

class Book
{
    char bookname[50];
    float bookprice;
    int pages;

public:
    // Constructor
    Book()
    {
        bookprice = 0;
        pages = 0;
    }

    // Function to take input
    void getdata()
    {
        cout << "Enter book name: ";
        cin >> bookname;

        cout << "Enter book price: ";
        cin >> bookprice;

        cout << "Enter number of pages: ";
        cin >> pages;
    }

    // Friend function
    friend void findBook(Book b[], int n);
};

class Publisher
{
    char publishername[50];
    int publisheryear;

public:
    // Constructor
    Publisher()
    {
        publisheryear = 0;
    }

    // Function to take input
    void getdata()
    {
        cout << "Enter publisher name: ";
        cin >> publishername;

        cout << "Enter publisher year: ";
        cin >> publisheryear;
    }

    // Friend function
    friend void findBook(Book b[], int n);
};

// Friend function
void findBook(Book b[], int n)
{
    cout << "\nBooks having price greater than 150 "
         << "and pages greater than 300:\n";

    for (int i = 0; i < n; i++)
    {
        if (b[i].bookprice > 150 && b[i].pages > 300)
        {
            cout << "\nBook Name: " << b[i].bookname;
            cout << "\nBook Price: " << b[i].bookprice;
            cout << "\nPages: " << b[i].pages << endl;
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    Book b[10];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << ":\n";
        b[i].getdata();
    }

    findBook(b, n);

    return 0;
}