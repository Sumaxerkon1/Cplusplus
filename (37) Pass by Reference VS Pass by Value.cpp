#include <iostream>

void swap(std::string &x , std::string &y);

int main() {
    
    // replaced old placeholder text
    std::string x = "Hello";
    std::string y = "World";
    
    swap(x, y);
    
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
   
    return 0;
}

// void function using references to modify original values directly
void swap(std::string &x , std::string &y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}