#include <iostream>
using namespace std;

class Circle
{
    float radius;
    float area;
    float circumference;
    public:
    float Areacalc()
    {
        return area = 3.14 * radius * radius;
    }

    float CircumferenceCalc()
    {
        return circumference = 2 * 3.14 * radius;
    }

    void input()
    {
        cout << "\n";
        cout << "Enter Radius: ";
        cin >> radius;
        area = Areacalc();
        circumference = CircumferenceCalc();
        cout << "\n";
    }
    void show()
    {
        cout << "\n";
        cout << "Area Of The Circle: " << area << endl;
         cout << "\n";
        cout << "Circumference Of The Circle " << circumference << endl;
        cout << "\n";
    }
};

int main()
{
    Circle obj;
    obj. input();
    obj. show();
    return 0;

}
