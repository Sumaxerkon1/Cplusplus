#include <iostream>

// enums assign names to integer constants
enum Day { sunday, monday, tuesday, wednesday, thursday, friday, saturday };

int main() {
    Day day = friday;

    switch (day) {
        case sunday:
            std::cout << "Sunday" << std::endl;
            break;
        case monday:
            std::cout << "Monday" << std::endl;
            break;
        case tuesday:
            std::cout << "Tuesday" << std::endl;
            break;
        case wednesday:
            std::cout << "Wednesday" << std::endl;
            break;
        case thursday:
            std::cout << "Thursday" << std::endl;
            break;
        case friday:
            std::cout << "Friday" << std::endl;
            break;
        case saturday:
            std::cout << "Saturday" << std::endl;
            break;
    }

    return 0;
}