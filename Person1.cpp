#include <iostream>
using namespace std;

class Person
{
    string name;
    float weight;

public:
    Person(string n, float w)
    {
        name = n;
        weight = w;
    }

    Person& highestWeight(Person &p)
    {
        if (this->weight > p.weight)
            return *this;
        else
            return p;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main()
{
    Person p1("Kavya", 55);
    Person p2("Riya", 65);

    Person &result = p1.highestWeight(p2);

    cout << "Person with highest weight:" << endl;
    result.display();

    return 0;
}
