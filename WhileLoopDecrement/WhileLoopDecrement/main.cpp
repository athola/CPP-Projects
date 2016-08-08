//
//  main.cpp
//  WhileLoopDecrement
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int val = 10;
    while (val > 0) {
        cout << val << endl;
        --val;
    }
    return 0;
}
