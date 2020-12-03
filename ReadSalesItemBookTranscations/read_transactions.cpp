//
//  read_transactions.cpp
//  ReadSalesItemBookTranscations
//
//  Created by Alexander Thola on 7/6/16.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc read_transactions.cpp -o read_transactions.o -lsdtc++'
//

#include <iostream>
#include <vector>
#include "../util/Sales_item.h"

int main() {
    Sales_item sales_item;
    std::vector<Sales_item> sales_items;

    std::cout << "Enter transactions for reading (Two empty strings to stop): "
              << std::endl;
    while (std::cin >> sales_item && !sales_item.isbn().empty()) {
        sales_items.push_back(sales_item);
    }

    std::cout << "Read the following transactions: " << std::endl;
    for (Sales_item item : sales_items) {
        std::cout << item << std::endl;
    }

    return 0;
}
