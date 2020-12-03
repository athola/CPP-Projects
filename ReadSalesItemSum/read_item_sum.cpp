//
//  read_item_sum.cpp
//  ReadSalesItemSum
//
//  Created by Alexander Thola on 11/30/2020.
//  Copyright © 2020 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc read_item_sum.cpp -o read_item_sum.o -lsdtc++'
//

#include <iostream>
#include "../util/Sales_item.h"

int main() {
    Sales_item sales_item_1, sales_item_2;

    std::cout << "Enter information for first sales item: " << std::endl;
    std::cin >> sales_item_1;
    std::cout << "Enter information for second sales item: " << std::endl;
    std::cin >> sales_item_2;
    if (!compareIsbn(sales_item_1, sales_item_2)) {
        std::cout << "ISBNs of these sales items do not match." << std::endl;
        return 1;
    } else {
        std::cout << "The total for these matching ISBN sales items is: "
                  << sales_item_1 + sales_item_2 << std::endl;
    }
    return 0;
}
