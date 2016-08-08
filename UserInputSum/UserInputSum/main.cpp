//
//  main.cpp
//  UserInputSum
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0, val = 0;
    cout << "Enter values to sum: " << endl;
    while(cin >> val) {
        sum += val;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
