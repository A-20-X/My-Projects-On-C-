#include <iostream>
#include <string>

using namespace std;

int main() {
    char character;
    string input;
    if (cout << "Type 'character' to start the Characters to ASCII Converter or 'ASCII' to convert ASCII to Characters: ", cin >> input, input == "character")
    {

    
        cout << "--- Characters To ASCII Convert Projects ---" << endl;

        while (true) {
        cout << "Enter a Character: [Type 'exit' to quit]: ";
        cin >> input;

        // Verify if the user wants to exit
        if (input == "exit") {
            cout << "Goodbye!" << endl;
            break;
        }
        // Check if the input is a single character
        if (input.length() == 1) {
            character = input[0];
            // Output the ASCII value
            cout << "ASCII value of character '" << character << "' is: " << (int)character << endl;
        } else {
            cout << "Error: Please enter only one character." << endl;
        }
            }    }
    if(input == "ASCII") {
    int ASCII;
     while (true) {
    cout << "Enter ASCII value (number between 0 and 127): ";
    cin >> ASCII;

    // Check if the input is within the valid ASCII range
    if (ASCII >= 0 && ASCII <= 127) {
        // Convert ASCII value to character
        char character = (char)ASCII;
        cout << "The character corresponding to ASCII value " << ASCII << " is: '" << character << "'" << endl;
    } else {
        cout << "Warning: The value is outside the basic ASCII range (0-127)." << endl;
    }
        
    }
//الخروج من اللوب في نظام التحويل من ASCCII
     }
    return 0;}