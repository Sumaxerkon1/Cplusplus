#include <iostream>

int main() {
    
    // replaced old name here
    std::string students[] = {"Panagiotis" , "Nikos" , "Giannis"};
    
    // range-based for loop (foreach loop)
    for (std::string student : students) {
        std::cout << student << std::endl;
    }
    
    return 0;
}