#include <iostream>
#include <cmath>

int main() {
    
    double x = 3.58;
    double y = 4;
    double z;
    
    // examples of useful cmath functions
    // z = std::max(x,y);
    // z = std::min(x,y);
    // z = pow(2,3); 
    // z = sqrt(y);
    // z = abs(-3); 
    
    // ceil(x) rounds up, floor(x) rounds down
    z = round(x); 
    
    std::cout << z << std::endl;
    
    return 0;
}