#include <iostream>

int main() {
    
    // replaced old placeholder text
    std::string name = "Nikos";
    int age = 25;
    bool student = false;
    
    // ampersand operator (&) returns the memory location
    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &student << std::endl;
    
    return 0;
}