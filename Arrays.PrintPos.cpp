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
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cout << "Negative Numbers: ";
            cout << arr[i] << endl;
            sum = sum + arr[i];
        }
        else if (arr[i] > 0)
        {
            cout << "Positive Numbers: ";
            cout << arr[i] << endl;
            sum1 = sum1 + arr[i];
        }
    }
    cout << "Sum Neg: " << sum << endl;
    cout << "Sum Pos: " << sum1 << endl;
}