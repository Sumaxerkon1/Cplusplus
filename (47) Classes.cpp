#include <iostream>
#include <string>

// a basic blueprint for a human object
class Human {
public:
    std::string name;
    std::string job;
    int age; 
    
    void eat() {
        std::cout << "This human eats!" << std::endl;
    }
    
    void drink() {
        std::cout << "This human drinks!" << std::endl;
    }
    
    void sleep() {
        std::cout << "This human sleeps!" << std::endl;
    }
};  

int main() {
    
    Human human1;
    human1.name = "Konstantinos";
    human1.job = "Developer";
    human1.age = 19;
    
    std::cout << human1.name << " " << human1.job << " " << human1.age << std::endl;
    
    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}