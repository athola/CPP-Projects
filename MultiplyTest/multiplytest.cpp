//
//  multiplytest.cpp
//  MultiplyTest
//
//  Created by Alexander Thola on 6/19/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc multiplytest.cpp -o multiplytest.o -lsdtc++'
//

#include <iostream>

int main() {
    int v1, v2;
    std::cout << "Enter two integers:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2 <<
        " is " << v1 * v2 << std::endl;
    return 0;
}
