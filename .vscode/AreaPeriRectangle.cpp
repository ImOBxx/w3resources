#include <iostream>
using namespace std;

int main()
{
    float l, w, P, A;
    cout << "Enter Length: ";
    cin >> l;
    cout << "Enter Width: ";
    cin >> w;
    A = l * w;
    P = 2 * (l + w);
    cout << "Area of a Rectangle: " << A << endl;
    cout << "Perimeter of a rectangle: " << P << endl;


}