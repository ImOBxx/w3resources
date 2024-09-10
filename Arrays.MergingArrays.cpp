#include <iostream>
using namespace std;

int main()
{
    int i;
    int n;
    cout << "Enter Array 1 Length: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array 1 Values: ";
        cin >> arr[i];
    }
    cout << "\n" << endl;
    int x;
    cout << "Enter Array 2 Length: ";
    cin >> x;
    int arr1[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Array 2 Values: ";
        cin >> arr[i];
    }
    cout << "\n" << endl;
    int arr2[n + x];
    int k = -1;
    for (int i = 0; i < n; i++)
    {
        k++;
        arr2[k] = arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        k++;
        arr2[k] = arr[i];
    }
    cout << "\n";
    cout << "{";
    for (int i = 0; i < n + x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}";
    cout << "\n" << endl;
}