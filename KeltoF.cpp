#include <iostream>
using namespace std;

int main()
{
    float k, f;
    cout << "Input Kelvin: ";
    cin >> k;
    f = (9.0 / 5.0) * (k - 273.15) + 32;
    cout << "Temp in Farenheit: " << f << endl;

}