/* Typedefenition and type aliases 
   Typedef = Keyword that is used for the creation of one alias for a data type 
   New identifier for an existing type */ 

#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string,int>> pairlist_t;
typedef std::string text_t;

int main() {
    
    pairlist_t list;
    
    // replaced the old name with a standard username placeholder
    text_t name = "user123";
    std::cout << name << std::endl;
    
    return 0;
}