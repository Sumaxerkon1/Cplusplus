#include <iostream>
#include <string>

int main() {
    
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    
    // checking string length and empty state
    if (name.empty()) {
        std::cout << "Bro you didn't put any name!" << std::endl;
    }
    else if (name.length() > 12) {
        std::cout << "Such a big name!" << std::endl;
    }
    else {
        std::cout << "Normal name" << std::endl;
    }
        
    std::string name2;
    std::cout << "Enter the 2nd name: ";
    std::cin >> name2;
    name2.clear(); // clears string content
    std::cout << "The 2nd name is: " << name2 << " -> Deleted" << std::endl;
    
    std::string name3;
    std::cout << "Enter the 3rd name: ";
    std::cin >> name3;
    name3.append("3"); // appends text to the end
    std::cout << "The 3rd name is: " << name3 << std::endl;
    std::cout << "First letter is: " << name3.at(0) << std::endl;
    
    std::string name4;
    std::cout << "Enter the 4th name: ";
    std::cin >> name4;
    name4.insert(0, "Mr/Mrs "); // inserts text at index 0
    std::cout << "The 4th name is: " << name4 << std::endl;
    
    std::string name5;
    std::cout << "Enter the 5th name: ";
    std::cin >> name5;
    name5.erase(0, 1); // removes 1 character starting from index 0
    std::cout << "The 5th name is: " << name5 << std::endl;
    
    return 0;
}

