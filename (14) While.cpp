#include <iostream>
#include <string>

int main() {
    
    std::string name;
    
    // while loop runs as long as the condition is true
    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    
    std::cout << "Hello " << name << std::endl;
    
    return 0;
}