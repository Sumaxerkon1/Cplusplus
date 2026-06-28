#include <iostream>

class Human {
public:
    Human() {
        std::cout << "Human object created" << std::endl;
    }

    // destructor is triggered when object goes out of scope or is deleted
    ~Human() {
        std::cout << "Human object destroyed" << std::endl;
    }
};

int main(){

    Human h;
    return 0;
}