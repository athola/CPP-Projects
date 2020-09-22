//
//  main.cpp
//  ForLoopSum
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    cout << "The sum of numbers 50 to 100 is " << sum << endl;
    return 0;
}
