#include <iostream>
using namespace std;

int main()
{
    float V, r, h;
    cout << "Enter Height: ";
    cin >> h;
    cout << "Enter Radius: ";
    cin >> r;
    V = (3.14 * r * r * h) / 3;
    cout << "Volume Of A Cone: " << V << endl;
}