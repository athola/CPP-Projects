//
//  forloopdecrement.cpp
//  ForLoopDecrement
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc forloopdecrement.cpp -o forloopdecrement.o -lsdtc++'
//

#include <iostream>

int main() {
    uint64_t decrement = 0;
    std::cout << "Enter a number from which to begin decrementing: "
              << std::endl;
    std::cin >> decrement;
    for (uint64_t i = decrement; i > 0; --i) {
        std::cout << i << std::endl;
    }
    return 0;
}
