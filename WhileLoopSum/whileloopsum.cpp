//
//  whileloopsum.cpp
//  WhileLoopSum
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc whileloopsum.cpp -o whileloopsum.o -lsdtc++'
//

#include <iostream>

int main() 
    int sum = 0, start = 0, end = 0;
    std::cout << "Enter a number from which to start counting: " << std::endl;
    std::cin >> start;
    std::cout << "Enter a number to end counting: " << std::endl;
    std::cin >> end;
    //Loop until val is incremented to end
    int val = start;
    while (val <= end) {
        sum += val; //Add val to sum.
        ++val;      //Increment val.
    }
    std::cout << "The sum of values " << start << " to " << end << " is " << sum << std::endl;
    return 0;
}
