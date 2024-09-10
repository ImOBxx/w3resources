#include <iostream> 
#include <climits> 
using namespace std; 

int main() // Main function where the program execution starts
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70}; // Declaration and initialization of an integer array
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << n << endl;
     

    cout << "Original array: "; // Output message indicating the original array is being displayed
    for (int i = 0; i < n; i++) 
        cout << nums[i] << " "; // Output each element of the array

    // Variables to store the three largest elements
    int first, second, third;
    
    // Check if the array has less than 3 elements
    if (n < 3) 
    {
        cout << "\nInvalid Input"; // Output message for invalid input
        return 1; // Exit the program with error code
    }

    third = first = second = INT_MIN; // Initializing first, second, and third as minimum integer value
    for (int i = 0; i < n; i++) // Loop to find three largest elements in the array
    {
        if (nums[i] > first) // Checking if current element is larger than the first largest element
        {
            third = second; // Updating third largest element
            second = first; // Updating second largest element
            first = nums[i]; // Updating first largest element
        }
        else if (nums[i] > second) // Checking if current element is larger than the second largest element
        {
            third = second; // Updating third largest element
            second = nums[i]; // Updating second largest element
        }
        else if (nums[i] > third) // Checking if current element is larger than the third largest element
        {
            third = nums[i]; // Updating third largest element
        }
    }

    cout << "\nThree largest elements are: " << first << ", " << second << ", " << third; // Output three largest elements

    return 0; // Return statement indicating successful execution and program termination
}
