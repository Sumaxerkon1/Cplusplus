
#include <iostream>

int main() {
    
    int age;
    
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    // basic conditional logic
    if (age >= 18) {
        std::cout << "You are an adult" << std::endl;
    }
    else if (age <= 0) {
        std::cout << "Dude you ain't existing" << std::endl;
    }
    else {
        std::cout << "You are not an adult" << std::endl;
    }   
    
    return 0;
}