
#include <iostream>

int main() {
    
    std::string name = "Codegrow";
    int age = 25;
    std::string packets[5] = {"packet1" , "packet2" , "packet3" , "packet4" , "packet5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pPackets = packets;

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;
    std::cout << *packets << std::endl;
    
    return 0;
}