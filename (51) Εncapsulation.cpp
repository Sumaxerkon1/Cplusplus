#include <iostream>

class Weather {
private: 
    int temperature = 0; // private attribute, cannot be accessed directly from outside
        
public:
    // getter function to safely read the private temperature
    int getTemperature(){
        return temperature;
    }
    
    // setter function to safely modify temperature with validation logic
    void setTemperature(int temp){
        if(temp < -100){
            this->temperature = -100;
        }
        else if(temp >= 55){
            this->temperature = 55;
        }
        else {
            this->temperature = temp;
        }
    }
};

int main(){
   
    Weather weather;
    int x;
    
    std::cout << "Give me x" << std::endl;
    std::cin >> x;
    
    weather.setTemperature(x);
    std::cout << "The temperature is: " << weather.getTemperature() << std::endl;
    
    return 0;
}