#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    char str[100];

public:

    // Constructor
    MyString(const char *s = "")
    {
        strcpy(str, s);
    }

    // Copy constructor
    MyString(const MyString &s)
    {
        strcpy(str, s.str);
    }

    // Overload + operator
    MyString operator+(const MyString &s)
    {
        MyString temp;

        strcpy(temp.str, str);
        strcat(temp.str, s.str);

        return temp;
    }

    // Overload <= operator based on length
    bool operator<=(const MyString &s)
    {
        return strlen(str) <= strlen(s.str);
    }

    // Overload << operator
    friend ostream& operator<<(ostream &out, const MyString &s)
    {
        out << s.str;
        return out;
    }
};

int main()
{
    MyString s1 = "BVM";

    cout << "S1 = " << s1 << endl;

    MyString s2 = "VVNAGAR";

    cout << "S2 = " << s2 << endl;

    // + operator
    MyString s3 = s1 + s2;

    cout << "S3 = S1 + S2 = " << s3 << endl;

    // <= operator based on length
    if (s1 <= s2)
        cout << "S1 <= S2 : True" << endl;
    else
        cout << "S1 <= S2 : False" << endl;

    return 0;
}