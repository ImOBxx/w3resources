#include <iostream>
using namespace std;

int main()
{
    float r, A, C;
    cout << "Input Radius Of The Circle: ";
    cin >> r;
    A = 3.14 * r * r;
    C = 2 * 3.14 * r;
    cout << "Area of the Circle: " << A << endl;
    cout << "Perimeter of the Circle: " << C << endl;
    
}