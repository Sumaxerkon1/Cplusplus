#include <iostream>

int main() {
    
    int month;
    
    std::cout << "Give a month (1-12): "; 
    std::cin >> month;
    
    switch (month) {
    case 1:
        std::cout << "January" << std::endl;
        break;
    case 2:
        std::cout << "February" << std::endl;
        break;
    case 3:
        std::cout << "March" << std::endl;
        break;
    case 4:
        std::cout << "April" << std::endl;
        break;
    case 5:
        std::cout << "May" << std::endl;
        break;
    case 6:
        std::cout << "June" << std::endl;
        break;
    case 7:
        std::cout << "July" << std::endl;
        break;
    case 8:
        std::cout << "August" << std::endl;
        break;
    case 9:
        std::cout << "September" << std::endl;
        break;
    case 10:
        std::cout << "October" << std::endl;
        break;
    case 11:
        std::cout << "November" << std::endl;
        break;
    case 12:
        std::cout << "December" << std::endl;
        break;
    default:
        std::cout << "Please enter a valid month" << std::endl;
        break;
    }
    
    char grade;
    
    std::cout << "Give your grade (A-D): ";
    std::cin >> grade;
    
    switch (grade) {
    case 'A':
        std::cout << "Great!" << std::endl;
        break;
    case 'B':
        std::cout << "Good!" << std::endl;
        break;
    case 'C':
        std::cout << "You could do better" << std::endl;
        break;
    case 'D':
        std::cout << "You failed" << std::endl;
        break;
    default:
        std::cout << "Give a grade between A-D" << std::endl;
        break;
    }
    
    return 0;
}