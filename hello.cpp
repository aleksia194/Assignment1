#include <iostream>
#include "head.h"

void hello() {
    std::string input;
    while (true) {
        std::cout << "(exit) read your name: ";
        std::getline(std::cin, input);
        if (input == "exit"){break;}
        
        std::cout << "Hello, " << input << "!" << std::endl;
        
    }
}
