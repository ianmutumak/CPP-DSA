#include <iostream>
#include <cctype> // Pulling this in to use standard character checking functions

// This function checks the character type and prints the result directly
void checkCase(char ch) {
    // Checking if it's a capital letter first
    if (std::isupper(ch)) {
        std::cout << "The character '" << ch << "' is uppercase." << std::endl;
    } 
    // Then checking if it's lowercase
    else if (std::islower(ch)) {
        std::cout << "The character '" << ch << "' is lowercase." << std::endl;
    } 
    // Catch-all for numbers, symbols, etc.
    else {
        std::cout << "The character '" << ch << "' is not an alphabet letter." << std::endl;
    }
}

int main() {
    char ch;
    // Grabbing a single character from the user
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Passing it off to our logic function
    checkCase(ch);

    return 0;
}