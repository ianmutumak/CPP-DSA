#include <iostream>

int main() {
    const int SIZE = 5;
    // Setting up the array and a running total variable
    double values[SIZE];
    double sum = 0.0;

    std::cout << "Please enter 5 values to populate the array:" << std::endl;
    
    // Looping exactly 5 times to grab user input
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Value " << (i + 1) << ": ";
        std::cin >> values[i];
        
        // Adding the new value to our running total immediately
        sum += values[i];
    }

    // Calculating the final average
    double average = sum / SIZE;
    
    // Outputting the result
    std::cout << "The average of the 5 values is: " << average << std::endl;

    return 0;
}