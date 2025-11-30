// Algorithm Challenge & Problem Solving
// 46 - Print Alphabet A to Z (Using ASCII & Character Increment)

#include <iostream>
using namespace std;

int main()
{
    //----------- Print Alphabet A to Z (Using ASCII)
    cout << "Alphabet from A to Z (Using ASCII)\n";

    // Loop through ASCII codes from 65 ('A') to 90 ('Z')
    for (int i = 65; i <= 90; i++)
    {
        // Display the ASCII code and its corresponding character
        cout << i << " => " << char(i) << "\n";
    }

    cout << "\n"; // Line break for readability

    //----------- Print Alphabet A to Z (Using Character Increment)
    cout << "Alphabet from A to Z (Using Character Increment)\n";

    char ch = 'A'; // Start from character 'A'

    // Loop through all uppercase letters
    for (int i = 0; i < 26; i++)
    {
        cout << ch << "\n"; // Print current character
        ch++;               // Increment to next character
    }

    return 0;
}
