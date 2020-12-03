//
//  count_isbn.cpp
//  CountISBN
//
//  Created by Alexander Thola on 12/03/2020.
//  Copyright © 2020 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc count_isbn.cpp -o count_isbn.o -lsdtc++'
//

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#include "../../util/Sales_item.h"

int main() {
    Sales_item sales_item;
    std::vector<std::string> isbns;
    std::set<std::string> counted_isbns;

    std::cout << "Enter transactions (Two empty strings to exit): "
              << std::endl;
    while (std::cin >> sales_item && !sales_item.isbn().empty()) {
        isbns.push_back(sales_item.isbn());
        counted_isbns.insert(sales_item.isbn());
    }

    for (std::string isbn : counted_isbns) {
        std::cout << "Number of transactions for " << isbn << ": "
                  << std::count(isbns.begin(), isbns.end(), isbn)
                  << std::endl;
    }

    return 0;
}
