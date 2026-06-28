#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    srand(time(0));
    
    int randomNum = (rand() % 5) + 1;
    
    // basic random prize selector
    switch (randomNum) {
    case 1:
        std::cout << "You won sticker!" << std::endl;
        break;
    case 2:
        std::cout << "You won t-shirt!" << std::endl;
        break;
    case 3:
        std::cout << "You won free lunch!" << std::endl;
        break;
    case 4:
        std::cout << "You won giftcard!" << std::endl;
        break;
    case 5:
        std::cout << "You won free concert ticket!" << std::endl;
        break;
    }
    
    return 0;
}