#include <iostream>

// function template to accept different data types for parameters
template <typename T , typename U>
auto max (T x, U y){
    return (x > y) ? x : y;
}

int main() {
    
    std::cout << max(1, 2.1) << std::endl;
    std::cout << max(1.1, 2.1) << std::endl;
    std::cout << max('1', '2') << std::endl;
    
    return 0;
}