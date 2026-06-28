
#include <iostream>

int main() {
    
    // counting up to 3
    for (int i = 1; i <= 3; i++) {
        std::cout << "This sentence will appear 3 times" << std::endl;
    }
    
    // countdown example
    for (int i = 10; i >= 0; i--) {
        std::cout << i << std::endl;
    }
    
    std::cout << "Happy New Year!" << std::endl;
    
    return 0;
}