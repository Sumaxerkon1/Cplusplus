#include <iostream>
#include <string>

class Human {
private:
    std::string name;
    int age;

public:
    // overloaded constructors depending on provided parameters
    Human() {
        name = "Unknown";
        age = 0;
    }

    Human(std::string n) {
        name = n;
        age = 0;
    }

    Human(std::string n, int a) {
        name = n;
        age = a;
    }
};

int main() {

    Human h1;
    Human h2("Maria");
    Human h3("Kostas", 25);

    return 0; 
}