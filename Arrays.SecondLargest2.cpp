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
        cout << "Invalid Input.";
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }
    int first = INT_MIN;
    int second = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            first = arr[i];
        }
    }
    if (second == INT_MIN)
    {
        cout << "There Is No Second Largest Number. ";
    }
    else{
        cout << "The Second Largest Number Is " << second << endl;
    }
}