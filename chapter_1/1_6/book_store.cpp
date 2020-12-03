//
//  book_store.cpp
//  BookStore
//
//  Created by Alexander Thola on 12/03/2020.
//  Copyright © 2016 Alexander Thola. All rights reserved.
//
//  Compile using 'gcc book_store.cpp -o book_store.o -lsdtc++'
//

#include <iostream>
#include "../../util/Sales_item.h"

int main() {
    Sales_item total;  // Variable to hold data for the next transaction.
    std::cout << "Enter transactions: " << std::endl;
    // Read the first transaction and ensure that there exists data to process.
    if (std::cin >> total) {
        Sales_item transaction;  // Variable to hold the running sum.
        while (std::cin >> transaction) {
            // If still processing the same book.
            if (total.isbn() == transaction.isbn()) {
                total += transaction;
            } else {
                // Print the results for the previous book.
                std::cout << total << std::endl;
                total = transaction;  // Total now refers to the next book.
            }
        }
        std::cout << total << std::endl;  // Print the last transaction.
    } else {
        // No input, warn the user.
        std::cerr << "No data entered." << std::endl;
        return -1;
    }

    return 0;
}
