//
//  main.cpp
//  CountIntegerInputs
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int currVal = 0, val = 0;
    if(cin >> currVal) {
        int cnt = 1;
        while(cin >> val) {
            if(currVal == val) {
                ++cnt;
            }
            else {
                cout << "The value " << currVal << " occurs "
                << cnt << " times." << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << "The value " << currVal << " occurs "
        << cnt << " times." << endl;
    }
    return 0;
}
