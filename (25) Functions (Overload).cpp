#include <iostream>

// function overloading: same name but different parameters
void makeSouvlaki();
void makeSouvlaki(std::string);
void makeSouvlaki(std::string , std::string);

int main() {
   
    makeSouvlaki();
    makeSouvlaki("patates");
    makeSouvlaki("tzatsiki" , "ntomata");

    return 0;
}

void makeSouvlaki() {
    std::cout << "Pita gyros" << std::endl;
}

void makeSouvlaki(std::string sunodeutiko1) {
    std::cout << "Pita gyros me " << sunodeutiko1 << std::endl;
}

void makeSouvlaki(std::string sunodeutiko1 , std::string sunodeutiko2) {
    std::cout << "Pita gyros me " << sunodeutiko1 << " kai " << sunodeutiko2 << std::endl;
}