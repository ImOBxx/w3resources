#include<iostream>
#include<climits> 
using namespace std; 

int main() 
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70}; 
    int n = sizeof(nums)/sizeof(nums[0]); 

    cout << "Original array: "; 
    for (int i = 0; i < n; i++) 
        cout << nums[i] << " "; 
    cout << endl; 

    if (n < 2) // Checking if the array has less than 2 elements
    {
        cout << "Invalid Input"; // Output message for invalid input
        return 0; // Return from the main function
    }

    int first_element = INT_MIN, second_element = INT_MIN; // Initializing first and second elements as minimum integer value

    for (int i = 0; i < n; i++) // Loop to find the second largest element in the array
    {
        if (nums[i] > first_element) // Checking if current element is larger than the first largest element
        {
            second_element = first_element; // Updating second largest element
            first_element = nums[i]; // Updating first largest element
        }
        else if (nums[i] > second_element && nums[i] != first_element) // Checking if current element is larger than the second largest element and not equal to first largest element
        {
            second_element = nums[i]; // Updating second largest element
        }
    }

    if (second_element == INT_MIN) // Checking if second largest element is still initialized as minimum integer value
    {
        cout << "No second largest element"; // Output message when there is no second largest element
    }
    else
    {
        cout << "The second largest element is: " << second_element; // Output the second largest element
    }

    return 0; // Return statement indicating successful execution and program termination
}
