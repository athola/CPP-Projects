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
              << "until a different integer is entered." << "\r\n";
    std::cout << "Please enter integers:" << std::endl;
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (currVal == val) {
                ++cnt;
            }
            else {
                std::cout << "The value " << currVal << " occurs "
                << cnt << " times." << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << "The value " << currVal << " occurs "
        << cnt << " times." << std::endl;
    }
    return 0;
}
