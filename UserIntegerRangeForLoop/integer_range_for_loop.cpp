//
//  integer_range_for_loop.cpp
//  UserIntegerRangeForLoop
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using
//   'gcc integer_range_for_loop.cpp -o integer_range_for_loop.o -lsdtc++'
//

#include <iostream>

int main() {
    int val1, val2;
    std::cout << "Please enter an integer: " << std::endl;
    std::cin >> val1;
    std::cout << "Please enter another integer: " << std::endl;
    std::cin >> val2;
    std::cout << "The values within the range of the above integers are: "
              << std::endl;
    if (val1 < val2) {
        for (int a = val1; a <= val2; ++a) {
            std::cout << a << std::endl;
        }
    } else if (val2 < val1) {
        for (int b = val2; b <= val1; ++b) {
            std::cout << b << std::endl;
        }
    } else {
        std::cout << val1 << std::endl;
    }
    return 0;
}
