#include <iostream>

int main() {
    
    // ternary operator is a shortcut for if/else statements
    int grade = 50;
    grade >= 60 ? std::cout << "You pass!" << std::endl : std::cout << "You failed!" << std::endl;
    
    // checks if a number is odd or even
    int number = 9;
    number % 2 == 1 ? std::cout << "Odd" << std::endl : std::cout << "Even" << std::endl;
    
    bool hungry = true;
    hungry ? std::cout << "Take a donut!" << std::endl : std::cout << "Alright!" << std::endl;
    
    return 0;
}