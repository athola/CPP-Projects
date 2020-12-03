//
//  integer_range.cpp
//  UserIntegerRange
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc integer_range.cpp -o integer_range.o -lsdtc++'
//

#include <iostream>

int main() {
    int val1 = 0, val2 = 0;
    std::cout << "Please enter an integer: " << std::endl;
    std::cin >> val1;
    std::cout << "Please enter another integer: " << std::endl;
    std::cin >> val2;
    std::cout << "Each number in the range of the entered integers: "
              << std::endl;
    if (val1 < val2) {
        while (val1 <= val2) {
            std::cout << val1 << std::endl;
            ++val1;
        }
    } else if (val2 < val1) {
        while (val2 <= val1) {
            std::cout << val2 << std::endl;
            ++val2;
        }
    } else {
        std::cout << val1 << std::endl;
    }
    return 0;
}
