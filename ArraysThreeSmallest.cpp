#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Length: ";
    cin >> n;

    if (n < 3) 
    {
        cout << "Invalid Input." << endl;
        return 1; 
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }

    int first = INT_MAX, second = INT_MAX, third = INT_MAX; // Initialize to maximum integer values

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] < third)
        {
            third = arr[i];
        }
    }

    cout << "The Three Smallest Numbers Are: " << first << ", " << second << ", " << third << endl;

    return 0; 
}
