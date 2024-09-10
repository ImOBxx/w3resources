#include <iostream>
using namespace std;

class Person
{
    float age;
    string name;
    string country;

    public:

    void input()
    {
        cout << "\n";
        cout << "INPUT PERSON'S DETAILS: ";
        cout << "\n";
        cout << "\n";
        cout << "Enter Person's Age: ";
        cin >> age;
        cout << "Enter Person's Name: ";
        cin >> name;
        cout << "Enter Person's Country: ";
        cin >> country;
        cout << "\n";
    }

    void show()
    {
        cout << "\n";
        cout << "PERSON'S DETAILS: ";
        cout << "\n";
        cout << "\n";
        cout << "The Person's Age: " << age << endl;
        cout << "The Person's Name: " << name << endl;
        cout << "The Person's Country: " << country << endl;
        cout << "\n";
    }
};

int main()
{
    Person Obj;
    Obj. input();
    Obj. show();
    return 0;
}