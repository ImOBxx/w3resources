#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Number: ";
    cin >> a;
    if (a > 0)
    {
        cout << "The Number is Positive." << endl;
    }
    else if (a < 0)
    {
        cout << "The Number is Negative." << endl;
    }
    else 
    {
        cout << "The Number is Zero." << endl;
    }
}