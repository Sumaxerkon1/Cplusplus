 
// Type conversion example

#include <iostream>

int main() {
    
    int correct = 8;
    int total = 10;
    
    // explicit cast to double to avoid integer division
    double score = correct / (double)total * 100;
    std::cout << score << "%" << std::endl;
   
    return 0;
}