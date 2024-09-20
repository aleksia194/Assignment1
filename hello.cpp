#include <iostream>
#include "head.h"

void hello() {
    std::string input;
    while (true) {
        std::cout << "read your name: ";
        std::getline(std::cin, input);
        
        std::cout << "Hello, " << input << "!" << std::endl;
        
    }
}
