#include <iostream>
using namespace std;

int main()
{
    float c, f;
    cout << "Enter Temperature In Farenheit: ";
    cin >> f;
    c = ((f * 5.0) - (5.0 * 32)) / 9;
    cout << "Temp in C: " << c << endl;
}