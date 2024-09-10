#include <iostream>
using namespace std;

int main() {

    float r, h, V;
    cout << "Enter Radius: ";
    cin >> r;
    cout << "Enter Height: ";
    cin >> h;
    V = 3.14 * r * r * h;
    cout << "Volume of the Cylinder: " << V << endl;

}