#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, next_transaction;


    std::cout << "Enter transactions: ISBN quantity price: " << std::endl;

    if (std::cin >> item1) {
        std::cout << "Accepted: " << item1 << std::endl;
    } else {
        std::cout << "Invalid input. Exiting." << std::endl;
        return 0;
    }
    while (std::cin >> next_transaction) {
        item1 += next_transaction;
        std::cout << "Accepted: " << next_transaction << std::endl;
    }

    std::cout << "Adding them all together and printing: " << std::endl;

    std::cout << item1 << std::endl;

    
    
    return 0;
}