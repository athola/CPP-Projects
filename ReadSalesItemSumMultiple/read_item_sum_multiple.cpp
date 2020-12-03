//
//  read_item_sum_multiple.cpp
//  ReadSalesItemSum
//
//  Created by Alexander Thola on 11/30/2020.
//  Copyright © 2020 Alexander Thola. All rights reserved.
//
//  Compile using
//  'gcc read_item_sum_multiple.cpp -o read_item_sum_multiple.o -lsdtc++'
//

#include <iostream>
#include <vector>
#include "../util/Sales_item.h"

int main() {
    Sales_item sales_item;
    std::vector<Sales_item> sales_items;
    std::string initial_isbn;
    uint16_t item_count = 0;

    std::cout << "Enter transactions with "
              << "matching ISBN (Two empty strings to exit): "
              << std::endl;
    while (std::cin >> sales_item && !sales_item.isbn().empty()) {
        if (item_count == 0) {
            initial_isbn = sales_item.isbn();
        }
        if (sales_item.isbn() != initial_isbn) {
            std::cout << "Entered non-matching ISBN, exiting." << std::endl;
            return 1;
        }
        sales_items.push_back(sales_item);
        item_count++;
    }

    Sales_item item_sum;
    for (Sales_item item : sales_items) {
        item_sum += item;
    }
    std::cout << "Sum of provided transactions: " << std::endl << item_sum
              << std::endl;

    return 0;
}
