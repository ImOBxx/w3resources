#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Length: ";
    cin >> n;

    if (n < 2)
    {
        cout << "Invalid Input." << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array Value: ";
        cin >> arr[i];
    }

    int first = INT_MAX, second = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] > first)
        {
            second = arr[i];
        }
    }

    if (second == INT_MAX)
    {
        cout << "There Is No Second Smallest Number." << endl;
    }
    else
    {
        cout << "The Second Smallest Number Is " << second << endl;
    }

    return 0;
}
