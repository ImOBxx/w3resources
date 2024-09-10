#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    b = b + a;
    a = b - a;
    b = b - a;
    cout << "After Swapping A: " << a << endl;
    cout << "After Swapping B: " << b << endl;

}