//
//  main.cpp
//  UserIntegerRange
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
    cout << "Each number in the range of the entered integers: " << endl;
    if (val1 < val2) {
        while(val1 <= val2) {
            cout << val1 << endl;
            ++val1;
        }
    }
    else if (val2 < val1) {
        while(val2 <= val1) {
            cout << val2 << endl;
            ++val2;
        }
    }
    else {
        cout << val1 << endl;
    }
    return 0;
}
