#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    char sing_ch; // Declaring a character variable

    cout << "\n\n Print code (ASCII code / Unicode code etc.) of a  given character:\n"; // Displaying the purpose of the program
    cout << "-----------------------------------------------------------------------\n";

    cout << " Input a character: "; // Prompting the user to input a character
    cin >> sing_ch; // Taking the character input from the user

    // Displaying the ASCII value of the entered character
    cout << " The ASCII value of " << sing_ch << " is: " << static_cast<int>(sing_ch) << endl;

    // Displaying the character for the entered ASCII value
    cout << " The character for the ASCII value " << static_cast<int>(sing_ch) << " is: " << static_cast<char>(static_cast<int>(sing_ch)) << endl << endl;

    return 0; // Returning 0 to indicate successful program execution
}