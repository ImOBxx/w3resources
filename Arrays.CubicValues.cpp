#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter Array Length: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] * arr[i] * arr[i];
        cout << sum << "\t";
    }


}