#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, sum;
    cout << "Enter Angle 1: ";
    cin >> a1;
    cout << "Enter Angle 2: ";
    cin >> a2;
    a3 = 180 - a1 - a2;
    cout << "The Third Angle of the Triangle: " << a3 << endl;

}