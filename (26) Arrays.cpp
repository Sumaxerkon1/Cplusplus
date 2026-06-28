#include <iostream>

int main() {
    
    std::string cars [] = {"Golf" , "Mustang" , "Ferrari"};
    
    // printing raw array name shows its memory location
    std::cout << cars << std::endl; 
    
    std::cout << cars[0] << std::endl;
    
    // modifying an array element
    cars[0] = "Mercedes";
    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;
    
    // fixed size empty array initialization
    int numbers[4];
    numbers[0] = 8;
    numbers[1] = 7;
    numbers[2] = 5;
    numbers[3] = 10;
    
    std::cout << numbers[0] << std::endl;
    std::cout << numbers[1] << std::endl;
    std::cout << numbers[2] << std::endl;
    std::cout << numbers[3] << std::endl;
    
    return 0;
}