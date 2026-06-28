#include <iostream>

// function prototype declaration
int multiply(int a , int b);

int main() {
   
    int a , b;
    std::cout << "Give me 2 numbers:" << std::endl;
    std::cin >> a >> b;
    int result = multiply(a , b);   
    std::cout << "The result is: " << result << std::endl;
   
    return 0;
}

// function returns an integer value
int multiply(int a , int b) {
    return a * b;
}