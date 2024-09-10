#include <iostream>
using namespace std;

int main()
{
    float P, A, l, w;
    cout << "Enter Length of the Rectangle: ";
    cin >> l;
    cout << "Enter Width of the Rectangle: ";
    cin >> w;
    A = l * w;
    P = 2 * (l + w);
    cout << "Area of a Rectangle:      " << A << endl;
    cout << "Perimeter of a Rectangle: " << P << endl;
    return 0;
    

}