#include <iostream>
using namespace std;

int main()
{
    int a, i = 0, sum;
    cout << "Enter a Number: " << endl;
    cin >> a;
    cout << "Tables :- ";
    cout << "\n";
    cout << "    " << a;
    cout << "\n";
    for (i = 1; i <= 10; i++)
    {
        sum = a * i;
        cout << a << " x " << i << " = " << sum << "\n"; 
    }
    return 0;

}