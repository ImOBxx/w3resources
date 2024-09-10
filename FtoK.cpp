#include <iostream>
using namespace std;

int main()
{
    float k, f;
    cout << "Input Farenheit: ";
    cin >> f;
    k = (5.0 / 9) * (f - 32) + 273.15;
    cout << "Temp is Kelvin: " << k << endl;

}