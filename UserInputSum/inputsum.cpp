//
//  inputsum.cpp
//  UserInputSum
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc inputsum.cpp -o inputsum.o -lsdtc++'
//

#include <iostream>

int main() {
    int sum = 0, val = 0;
    std::cout << "Enter values to sum (0 to stop): " << std::endl;
    while(std::cin >> val && val != 0) {
        sum += val;
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
