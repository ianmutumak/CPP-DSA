#include <iostream>

// Helper function to handle the area math
double computeArea(double sideLength) {
    return sideLength * sideLength;
}

// Helper function to handle the perimeter math
double computePerimeter(double sideLength) {
    return 4 * sideLength;
}

int main() {
    double sideLength;
    // Asking the user for the base measurement
    std::cout << "Enter the side length of the square: ";
    std::cin >> sideLength;

    // Passing the input to our helper functions to get the results
    double area = computeArea(sideLength);
    double perimeter = computePerimeter(sideLength);

    // Printing out both calculations
    std::cout << "Area of the square: " << area << std::endl;
    std::cout << "Perimeter of the square: " << perimeter << std::endl;

    return 0;
}