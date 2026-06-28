#include <iostream>

// passing parameters by reference using & operator to modify original values
void swapThree(int& a , int& b , int& c) {
    int temp = a;
    int temp2 = b;
    a = c;
    b = temp;
    c = temp2;
}

int main() {
   
    int a , b , c;
    std::cout << "Give me 3 numbers:" << std::endl;
    std::cin >> a >> b >> c;
    std::cout << "a= " << a << " b= " << b << " c= " << c << std::endl;
    
    swapThree(a , b , c);
    std::cout << "After swap: " << "a= " << a << " b= " << b << " c= " << c << std::endl;

    return 0;
}


    
    
