//
//  sales_item.cpp
//  SalesItemExamples
//
//  Created by Alexander Thola on 7/6/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc sales_item.cpp -o sales_item.o -lsdtc++'
//

#include <iostream>
#include "../../util/Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cout << "Enter book number, units sold, and price of first item: "
              << std::endl;
    std::cin >> item1;
    std::cout << "Enter book number, units sold, and price of second item: "
              << std::endl;
    std::cin >> item2;
    std::cout << "The total sale item lines are: " << std::endl;
    std::cout << item1 + item2 << std::endl;
    return 0;
}
