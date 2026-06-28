#include <iostream>

// const references prevent the function from changing the arguments
void printInfo(const std::string &name , const int &age);

int main() {
    
    std::string name = "Konstantinos";
    int age = 19;
    
    printInfo(name, age);
    
    return 0;
}

void printInfo(const std::string &name , const int &age){
    // name = "George"; // error: cannot modify a const reference
    
    std::cout << name << std::endl;
    std::cout << age << std::endl;
}