#include <iostream>

// void functions do not return any value
void printSum(int a , int b) {
    std::cout << "The result is: " << a + b << std::endl;
}

int main() {
    
    int a , b;
    std::cout << "Give me 2 numbers:" << std::endl;
    std::cin >> a >> b;
    printSum(a , b);

    return 0;
}