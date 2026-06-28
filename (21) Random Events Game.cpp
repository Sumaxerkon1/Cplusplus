#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    int num = 0;
    int guess = 0;
    int tries = 0;
    
    srand(time(0));
    num = (rand() % 5) + 1;
    
    // simple number guessing game loop
    while (num != guess) {
        std::cout << "Give a guess:" << std::endl;
        std::cin >> guess;
        tries++;
    }
    
    if (num == guess) {
        std::cout << "You won!" << std::endl;
        std::cout << "You tried " << tries << " times!" << std::endl;
    }
    
    return 0;
}