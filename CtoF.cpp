#include <iostream>
using namespace std;

int main() 
{
    float c, f;
    cout << "Input Celsius: ";
    cin >> c;
    f = (c * 9.0) / 5.0 + 32;
    cout << "Temperature in Fareheit: " << f << endl;
}