#include <iostream>

int main() {
    //Arithmetic operators (+ , - , * , / , %)
   
    int students = 20;
    //students = students + 1;
    //students += 1;
    //students++; 
    
    //students--; 
    
    //students *= 3;
    
    students = students / 2;
    std::cout << students << std::endl;
    
    // modular (%) checks for odd or even numbers
    int remainder = students % 3;
    std::cout << remainder << std::endl;
    
    // operator priority rule: parenthesis, multiplication/division, addition/subtraction
    int result = 5 + 2 - 3 * 4 / 3; 
    std::cout << result << std::endl;
    
    float result2 = 5 + (2 - 3) * 3 / 3; 
    std::cout << result2 << std::endl;
    
    return 0;
}