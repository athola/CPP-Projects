//
//  main.cpp
//  WhileLoopSum
//
//  Created by Alexander Thola on 6/22/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0, val = 50;
    //Loop until the val is incremented to 100
    while (val <= 100) {
        sum += val; //Add val to sum.
        ++val;      //Increment val.
    }
    cout << "The sum of values 50 to 100 is " << sum << endl;
    return 0;
}
