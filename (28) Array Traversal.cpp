#include <iostream>

int main() {
    
    // replaced old name here
    std::string students[] = {"Panagiotis" , "Nikos" , "Maria"};
    
    for (int i = 0; i < 3; i++) {
        std::cout << students[i] << std::endl;
    } 
    
    char grades[] = {'A','B','C','D','E','F'};
    
    // formula to dynamically find the array length
    for (int j=0; j<sizeof(grades)/sizeof(char); j++) {
        std::cout << grades[j] << std::endl;
    }
    
    return 0;
}