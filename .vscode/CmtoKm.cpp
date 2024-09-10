#include <iostream>
using namespace std;

int main()
{
    float cm, m, km;
    cout << "Enter Centimeters: ";
    cin >> cm;
    m = cm / 100;
    km = cm / 100000;
    cout << "Distance In Meters: " << m << " m " << endl;
    cout << "Distance In Kilometers: " << km << " km " << endl;
    
}