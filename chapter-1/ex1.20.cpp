#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1;

    std::cout << "Enter ISBN, quantity sold, price: " << std::endl;
    while (std::cin >> item1) {
        std::cout << "Accepted: " << item1 << std::endl;
    }

    
    return 0;
}