#include<iostream> // Header file for input/output stream
using namespace std; // Using the standard namespace

int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7}; // Declaration and initialization of an integer array
    int n = sizeof(nums) / sizeof(nums[0]); // Calculating the number of elements in the array

    cout << "Original array: "; // Output message indicating the original array is being displayed
    for (int i = 0; i < n; i++) 
        cout << nums[i] << " "; // Output each element of the array
    cout << endl; // New line for better readability

    int max_count = 0; // Variable to track the maximum occurrence count

    // Loop to count occurrences and find the maximum occurrence count
    for (int i = 0; i < n; i++)
    {
        int count = 1; // Counter to track the occurrence of each number
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j]) // Checking if the element at index 'i' is equal to the element at index 'j'
                count++; // Incrementing the counter for the same elements
        }

        if (count > max_count) // Checking if the current count is greater than the maximum count
            max_count = count; // Updating the maximum count with the new higher count
    }

    cout << "\nMost occurred number(s): "; // Output message to indicate displaying the most occurred number(s)

    // Loop to output the number(s) with the maximum occurrence count
    for (int i = 0; i < n; i++)
    {
        int count = 1; // Counter to track the occurrence of each number
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j]) // Checking if the element at index 'i' is equal to the element at index 'j'
                count++; // Incrementing the counter for the same elements
        }

        if (count == max_count) // Checking if the current count is equal to the maximum count
            cout << nums[i] << " "; // Output the number(s) with the maximum occurrence count
    }
    cout << endl; // New line for better readability

    return 0;
}
