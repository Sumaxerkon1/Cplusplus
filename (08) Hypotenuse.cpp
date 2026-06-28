
#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    
    std::cout << "Enter side A of the triangle: ";
    std::cin >> a;
    
    std::cout << "Enter side B of the triangle: ";
    std::cin >> b;
    
    // pythagorean theorem
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenuse of the triangle is : " << c << std::endl;
    
    return 0;
}