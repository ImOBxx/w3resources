#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotient, remainder;
    cout << "Input Dividend: ";
    cin >> dividend;
    cout << "Input Divisor: ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "The Quotient of the Divison is : " << quotient << endl;
    cout << "The Remainder of the Divison is : " << remainder << endl;


}