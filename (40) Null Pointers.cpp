#include <iostream>

int main() {
    
    // nullptr safe initialization
    int *pointer = nullptr;
    int x = 999;
    
    pointer = &x;
    
    // checking if pointer points to a valid address
    if(pointer == nullptr) {
        std::cout << "Address was not assigned!!!" << std::endl;
    }
    else {
        std::cout << "Address was assigned!!!" << std::endl;
        std::cout << *pointer << std::endl; // dereferencing
    }
    
    return 0;
}