#include <iostream>

int main() {
    
    double result;
    double a, b;
    char operation;
    
    std::cout << "Give me 2 numbers: ";
    std::cin >> a >> b;
    std::cout << "What arithmetic operation do you want to do? (+ , - , * , /)" << std::endl;
    std::cin >> operation;
    
    // switch statement for basic calculator functions
    switch (operation) {
    case '+':
        result = a + b;
        std::cout << "The result is: " << result;
        break; 
    case '-':
        result = a - b;
        std::cout << "The result is: " << result;
        break;
    case '*':
        result = a * b;
        std::cout << "The result is: " << result;
        break;
    case '/':
        if (b == 0) {
            std::cout << "You can't divide by zero!";
        }
        else {
            result = a / b;
            std::cout << "The result is: " << result;
        }
        break;
    default:
        std::cout << "Invalid operation. Try again!";
        break;
    }    
        
    return 0;
}