#include <iostream>
#include <algorithm>

int main() {

    const int SIZE = 99;
    std::string foods[SIZE];

    // fill function populates part of the array
    std::fill(foods , foods + (SIZE/3) , "pizza");

    for (std::string food : foods) {
        std::cout << food << std::endl;
    }

    return 0;
}