#include <iostream>

// defining a custom structure group
struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){
    
    student student1;
    student student2;
    
    student1.name = "Konstantinos";
    student1.gpa = 8.9;
    student1.enrolled = true;
    
    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.enrolled << std::endl;
    
    student2.name = "Panagiotis";
    student2.gpa = 7.2;
    student2.enrolled = false;
    
    std::cout << student2.name << std::endl;
    std::cout << student2.gpa << std::endl;
    std::cout << student2.enrolled << std::endl;
    
    return 0;
}