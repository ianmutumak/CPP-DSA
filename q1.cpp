#include <iostream>

int main() {
    int days;
    // Asking the user to input the number of days they want to convert
    std::cout << "Enter the number of days: ";
    std::cin >> days;

    // Calculating the total seconds (days * 24 hours * 60 minutes * 60 seconds)
    int seconds = days * 24 * 60 * 60;

    // Printing out the calculated result
    std::cout << "The number of seconds in " << days << " days is " << seconds << " seconds." << std::endl;

    return 0;
}