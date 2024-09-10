#include <iostream>
using namespace std;

int main()
{
    int di, dr, q, r;
    cout << "Enter Dividend: ";
    cin >> di;
    cout << "Enter Divisor: ";
    cin >> dr;
    q = di / dr;
    r = di % dr;
    cout << "The Quotient of The Divison: " << q << endl;
    cout << "The Remainder of The Divison: " << r << endl;
    

}