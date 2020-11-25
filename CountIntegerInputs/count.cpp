//
//  count.cpp
//  CountIntegerInputs
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc count.cpp -o count -lsdtc++'
//

#include <iostream>

int main() {
    std::cout << "Counts number of times an integer was entered "
              << "until a different integer is entered." << std::endl;
    std::cout << "Please enter integers:" << std::endl;
    int curr_val = 0, val = 0;
    if (std::cin >> curr_val) {
        int cnt = 1;
        while (std::cin >> val) {
            if (curr_val == val) {
                ++cnt;
            }
            else {
                std::cout << "The value " << curr_val << " occurs "
                << cnt << " times." << std::endl;
                curr_val = val;
                cnt = 1;
            }
        }
        std::cout << "The value " << curr_val << " occurs "
        << cnt << " times." << std::endl;
    }
    return 0;
}
