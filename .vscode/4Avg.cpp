#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, avg;
    cout << "Enter The 1st Numbers: ";
    cin >> a;
    cout << "Enter The 2nd Numbers: ";
    cin >> b;
    cout << "Enter The 3rd Numbers: ";
    cin >> c;
    cout << "Enter The 4th Numbers: ";
    cin >> d;

    avg = (a + b + c + d) / 4.0;
    cout << "Average : " << avg << endl;

}