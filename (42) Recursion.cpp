#include <iostream>

int factorial(int num);

int main(){

    // recursion example finding the factorial of 3
    std::cout << factorial(3) << std::endl;

    return 0;
}

int factorial(int num){
    // base case to stop recursion
    if (num > 1){
        return num * factorial(num - 1);
    }
    else {
        return 1;
    }
}