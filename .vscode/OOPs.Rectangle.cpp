#include <iostream>
using namespace std;


class Recatngle
{
    float area;
    float perimeter;
    float length;
    float width;

    public:

    float areacalc()
    {
        return area = length * width;
    }
    float perimetercalc()
    {
        return perimeter = 2 * (length + width);
    }
    void input()
    {
         cout << "\n";
        cout << "Enter Rectangle Dimensions: ";
         cout << "\n";
         cout << "\n";
        cout << "Enter Rectangle's Length: ";
        cin >> length;
        cout << "Enter Rectangle's Width: ";
        cin >> width;
         cout << "\n";
        area = areacalc();
        perimeter = perimetercalc();
    }
    void show()
    {
         cout << "\n";
        cout << "Rectangle Dimensions: ";
        cout << "\n";
         cout << "\n";
        cout << "The Area Of The Rectangle: " << area << endl;
         cout << "\n";
        cout << "The Perimeter Of The Rectangle: " << perimeter << endl;
        cout << "\n";

    }

};

int main()
{
    Recatngle Obj;
    Obj. input();
    Obj. show();
    return 0;
}