#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Length: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Max Element In The Array: " << max << endl;
    cout << "Min Element In the Array: " << min << endl;
}