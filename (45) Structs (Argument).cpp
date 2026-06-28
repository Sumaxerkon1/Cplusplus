#include <iostream>

struct Car {
   std::string model;
   int year;
   std::string color;
};

void printCar(Car car);

int main() {
    
    Car car1;
    Car car2;
    
    car1.model = "Golf";
    car1.year = 2010;
    car1.color = "black";
    
    car2.model = "M3";
    car2.year = 2021;
    car2.color = "blue";
    
    // passing struct variable as an argument
    printCar(car1);
    printCar(car2);
    
    return 0;
}

void printCar(Car car){
    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl;
}