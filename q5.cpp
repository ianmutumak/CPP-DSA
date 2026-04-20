#include <iostream>

int main() {
    // Setting up the initial state as defined in the pseudocode
    double x = 0.0;
    double y = 20.0;

    // Translating the REPEAT-UNTIL logic into a C++ do-while loop
    // The loop runs, then checks the condition at the end
    do {
        // Core operations from the pseudocode
        y = y - 4.0;
        x = x + (2.0 / y);
        
    // The pseudocode says "UNTIL y IS LESS THAN 6", so we keep looping *while* y is 6 or greater
    } while (y >= 6.0); 

    // Final output step
    std::cout << "The value of x is: " << x << std::endl;

    return 0;
}