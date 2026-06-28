#include <iostream>
#include <string>

int main() {
    
    std::string foods[4];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;
    
    // dynamically adding elements into an array
    for (int i=0; i<size; i++){
        std::cout << "Enter the food you like or press the letter q to quit # " << i + 1 << ":";
        std::getline(std::cin , temp);
        
        if(temp == "q"){
            break;
        }
        else {
            foods[i]=temp;
        }
    }
    
    std::cout << "You like the following foods:" << std::endl;
    
    for (int i=0; !foods[i].empty(); i++){
        std::cout << foods[i] << std::endl;
    }
    
    return 0;
}