
#include <iostream>

int main() {
    
    int number;
    
    // do while loop always executes at least once
    do {
        std::cout << "Give a positive number: ";
        std::cin >> number;
    } while (number < 0);
    
    std::cout << "The number is: " << number << std::endl;
    
    return 0;
}