#include <iostream>
#include <string>

int searchArray(int[] , int , int);
int searchForFood(std::string[] , int , std::string);

int main() {
    
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;
    
    std::cout << "Enter element to search for:" << std::endl;
    std::cin >> myNum;
    
    index = searchArray(numbers , size , myNum);
    
    if(index != -1) {
        std::cout << myNum << " is at index " << index << std::endl;
    }
    else {
        std::cout << myNum << " is not in the array" << std::endl;
    }
    
    std::string foods[] = {"souvlaki" , "burger" , "hotdog"};
    int sizef = sizeof(foods)/sizeof(foods[0]);
    int indexx;
    std::string myFood;
    
    std::cout << "Enter food to search for:" << std::endl;
    std::cin >> myFood;
    
    indexx = searchForFood(foods , sizef , myFood);
    
    if(indexx != -1) {
        std::cout << myFood << " is at index " << indexx << std::endl;
    }
    else {
        std::cout << myFood << " was not found" << std::endl;  
    }
    
    return 0;
}

// linear search algorithm for integers
int searchArray(int array[], int size , int element) {
    for (int i=0; i<size; i++) {
        if(array[i] == element) {
          return i;  
        }
    }
    return -1;
}

// linear search algorithm for strings
int searchForFood(std::string f[] , int sizef , std::string myFood) {
    for(int j=0; j<sizef; j++) {
        if(f[j] == myFood){
            return j;
        }
    }
    return -1;
}