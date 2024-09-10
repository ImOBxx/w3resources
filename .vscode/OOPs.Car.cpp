#include <iostream>
using namespace std;

class Car
{
    float year;
    string company;
    string model;

    public:

    void info()
    {
        cout << "\n";
        cout << "Enter Car's Details: ";
        cout << "\n";
        cout << "\n";
        cout << "Enter Car's Make Year: ";
        cin >> year;
        cout << "Enter Car's Company Name: ";
        cin >> company;
        cout << "Enter Car's Model Number: ";
        cin >> model;
        cout << "\n";
    }
    void display()
    {
        cout << "\n";
        cout << "CAR DETAILS: ";
        cout << "\n";
        cout << "\n";
        cout << "Cars Make Year: " << year << endl;
        cout << "Car's Company Name: " << company << endl;
        cout << "Car's Model Number: " << model << endl;
        cout << "\n";
    }
};

int main()
{
    Car Obj;
    Obj. info();
    Obj. display();
}