#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
    float price;
    int year;
public:
    Vehicle(float p =0,int y=0)
    {
        price=p;
        year=y;
    }
    virtual void display()
    {
        cout<<"Vehicle Price:"<<price<<endl;
        cout<<"Year:"<<year<<endl;
    }
};
class Bus : public Vehicle
{
private:
    int seatingCapacity;
public:
    Bus(float p,int y, int s) : Vehicle(p,y)
    {
        seatingCapacity=s;
    }
    void display()
    {
        float totalprice=seatingCapacity * price;
        cout<<"Bus Details"<<endl;
        cout<<"Year:"<<year<<endl;
          cout<<"Price as per seat:"<<price<<endl;
            cout<<"Seating Capacity:"<<seatingCapacity<<endl;
              cout<<"Total price of seats:"<<totalprice<<endl;
    }
};
class Truck : public Vehicle
{
private:
    int loadingCapacity;
public:
    Truck(float p,int y,int l): Vehicle(p,y)
    {
        loadingCapacity=l;
    }
    void display()
    {
        float totalPrice=loadingCapacity*price;
        cout<<"Truck Details"<<endl;
        cout<<"Year:"<<year<<endl;
         cout<<"Price per item:"<<price<<endl;
          cout<<"Loading Capacity:"<<loadingCapacity<<endl;
           cout<<"Total price after loading:"<<totalPrice<<endl;

    }
};
int main()
{
    Vehicle *v;
    Bus b(50000,2025,40);
    Truck t(20000,2024,10);
    v=&b;
    v->display();
    v=&t;
    v->display();
    return 0;
}
