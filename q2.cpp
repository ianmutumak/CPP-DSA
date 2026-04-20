#include <iostream>
#include <cmath> // Needed this for the std::pow function

int main() {
    double radius;
    // Prompting for the sphere's radius
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    // Setting up our constant for PI
    const double PI = 3.14159265359; 
    
    // Plugging the radius into the sphere volume formula: V = (4/3) * pi * r^3
    double volume = (4.0 / 3.0) * PI * std::pow(radius, 3);

    // Displaying the result
    std::cout << "The volume of the sphere is: " << volume << std::endl;

    return 0;
}