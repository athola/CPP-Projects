//
//  main.cpp
//  UserIntegerRangeForLoop
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int val1, val2;
    cout << "Please enter an integer: " << endl;
    cin >> val1;
    cout << "Please enter another integer: " << endl;
    cin >> val2;
    cout << "The values within the range of the above integers are: " << endl;
    if (val1 < val2) {
        for(int a = val1; a <= val2; ++a) {
            cout << a << endl;
        }
    }
    else if (val2 < val1) {
        for(int b = val2; b <= val1; ++b) {
            cout << b << endl;
        }
    }
    else {
        cout << val1 << endl;
    }
    return 0;
}
