#include <iostream>

// namespaces prevent naming conflicts
namespace first {
    int x = 5;
}

namespace second {
    int x = 6;
}

int main() {
    //using namespace std; 
    //using namespace first; 
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    
    return 0;
}