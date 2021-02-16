#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;

    std::cout << "Enter first transaction: ISBN quantity price: " << std::endl;
    if (std::cin >> item1) {
        std::cout << "Accepted: " << item1 << std::endl;
    } else {
        std::cout << "Invalid input. Exiting.";
        return 0;
    }

    std::cout << "Enter second transaction: ISBN quantity price: " << std::endl;
    if (std::cin >> item2) {
        std::cout << "Accepted: " << item2 << std::endl;
    } else {
        std::cout << "Invalid input. Exiting.";
        return 0;
    }

    std::string isbn1 = item1.isbn();
    std::string isbn2 = item2.isbn();

    if (isbn1 != isbn2) {
        std::cout << "Invalid input: ISBN's must be the same. Exiting." << std::endl;
        return 1;
    }
    std::cout << "Adding first and second item and printing: " << std::endl;

    std::cout << item1 + item2 << std::endl;
    
    return 0;
}