
#include <iostream>

int main() {
    
    double gpa = 8.1;
    std::cout << sizeof(gpa) << " bytes" << std::endl;
    
    char grade = 'A';
    std::cout << sizeof(char) << " bytes" << std::endl;
    
    bool male = true;
    std::cout << sizeof(bool) << " bytes" << std::endl;
    
    char grades[] = {'A' , 'B' , 'C' , 'D' , 'F'};
    std::cout << sizeof(grades) << " bytes" << std::endl;
    
    std::string students[] = {"Konstantinos" , "Panagiotis" , "Giorgos"};
    std::cout << sizeof(students) << " bytes" << std::endl;
    
    return 0;
}