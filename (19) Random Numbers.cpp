#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    // seed the random number generator using current time
    srand(time(NULL));
    
    // generating numbers between 1 and 6 like a dice
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    return 0;
}