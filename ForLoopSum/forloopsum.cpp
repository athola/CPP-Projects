//
//  forloopsum.cpp
//  ForLoopSum
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc forloopsum.cpp -o forloopsum.o -lsdtc++'
//

#include <iostream>

int main() {
    uint64_t sum = 0, start = 0, end = 0;
    std::cout << "Enter a starting number: " << std::endl;
    std::cin >> start;
    std::cout << "Enter an ending number: " << std::endl;
    std::cin >> end;
    for (uint64_t i = start; i <= end; ++i) {
        sum += i;
    }
    std::cout << "The sum of numbers " << start << " to " << end
              << " is " << sum << std::endl;
    return 0;
}
