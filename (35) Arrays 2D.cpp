#include <iostream>

int main(){
    
    // 2D array representation (matrix)
    std::string cars[][3] = {{"Golf" , "Polo" , "Passat"},
                             {"GLA" , "A Class" , "C Class"},
                             {"X1" , "X2" , "X3"}};
    
    std::cout << cars[2][0] << std::endl; // X1
    std::cout << cars[1][1] << std::endl; // A Class 
    std::cout << cars[1][2] << std::endl; // C Class
    std::cout << cars[0][1] << std::endl; // Polo

    return 0;
}