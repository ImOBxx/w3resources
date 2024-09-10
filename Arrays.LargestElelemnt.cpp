#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\n";
    cout << "Enter Array Length: ";
    cin >> n;
    cout << "\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "\n";
    cout << "Largest Number In The Array: " << max << endl;
    cout << "\n";
}