#include <iostream>

int main() {

    int *pNum = nullptr;
    pNum = new int; // dynamically allocating memory for an integer
    *pNum = 21;

    std::cout << "Address: " << pNum << std::endl;
    std::cout << "Value: " << *pNum << std::endl;

    delete pNum; // freeing up allocated memory

    char* pGrades = nullptr;
    int size;

    std::cout << "How many grades to enter?" << std::endl;
    std::cin >> size;

    pGrades = new char[size]; // dynamic array allocation

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
        std::cin.ignore(); 
    }

    for (int i = 0; i < size; i++) {
        std::cout << "The grade of the #" << i + 1 << " person is: " << pGrades[i] << std::endl;
    }

    delete[] pGrades; // freeing up allocated array memory
    return 0;
}