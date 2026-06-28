#include <iostream>

int main() {

    // const makes the variable read-only
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm" << std::endl;

    return 0;
}