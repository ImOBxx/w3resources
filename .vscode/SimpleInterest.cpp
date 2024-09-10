#include <iostream>
using namespace std;

int main()
{
    float P, T, R, SI;
    cout << "Input Principal: ";
    cin >> P;
    cout << "Input Time: ";
    cin >> T;
    cout << "Input Rate Of Interest: ";
    cin >> R;
    SI = (P * R * T) / 100;
    cout << "Simple Interest for the amount " << P << " for " << T << " years @ " << R << " % is: " << SI << endl;  
}