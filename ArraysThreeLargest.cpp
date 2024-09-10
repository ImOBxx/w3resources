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

    int first = INT_MIN, second = INT_MIN, third = INT_MIN; // Initialize first, second, and third as minimum integer values

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    cout << "The Three Largest Numbers Are: " << first << ", " << second << ", " << third << endl;

    return 0; // Return statement indicating successful execution and program termination
}
