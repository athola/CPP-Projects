//
//  while_loop_decrement.cpp
//  WhileLoopDecrement
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using
//  'gcc while_loop_decrement.cpp -o while_loop_decrement.o -lsdtc++'
//

#include <iostream>

int main() {
    uint64_t decrement = 0;
    std::cout << "Enter a positive integer from which to decrement: "
              << std::endl;
    std::cin >> decrement;
    while (decrement > 0) {
        std::cout << decrement << std::endl;
        --decrement;
    }
    return 0;
}
