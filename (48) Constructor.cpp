#include <iostream>
#include <string>

class Human{
public:
    std::string name;
    int age;
    
    // constructor automatically assigns values when object is instantiated
    Human(std::string name , int age){
        this->name = name;
        this->age = age;
    }
};

int main(){
    
    Human human1("Konstantinos", 19);
    std::cout << human1.name << " " << human1.age << std::endl;

    return 0;
}