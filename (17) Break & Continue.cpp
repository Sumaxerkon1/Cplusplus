#include <iostream>

int main() {
    
    for (int i = 0; i < 20; i++) {
    
        // continue skips the current iteration
        if (i == 13) {
            continue;
        }
        
        // break stops the loop completely
        if (i == 19) {
            break;
        }
        
        std::cout << i << std::endl;   
    }
    
    return 0;
}