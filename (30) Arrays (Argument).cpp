#include <iostream>

double getTotal(double prices[] , int size);

int main() {
    
    double prices[] = {49.99 , 16.67 , 19.98 , 35.3};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices , size);
    
    std::cout << "The total amount is: " << total;
    
    return 0;
}

// passing array to a function
double getTotal(double prices[] , int size) {
    double total = 0;
    
    for (int i=0; i<size; i++) {
        total += prices[i];
    }
    
    // return statement must be outside the loop to sum everything
    return total;
}