#include <iostream>
#include <vector>  // necessary for unknown number of ISBNs inputted by user.
#include "Sales_item.h"

/*
This uses some C++ I've picked up elsewhere that hasn't been presented 
in the book yet. I had to edit Sales_item.h to create functions that
return private variables. I'm sure add_transaction is not the best way 
to update a group of objects in C++, but that's why I'm in chapter 1:
*/

std::vector<Sales_item> add_transaction(Sales_item new_transaction, std::vector<Sales_item> current_list) {
    bool transaction_added = false;
    for (auto it = current_list.begin(); it != current_list.end(); ++it) {
        
        if (new_transaction.isbn() == (*it).isbn()) {
            *it += new_transaction;
            transaction_added = true;
            break;
        }
    }
    if (!transaction_added) {
        current_list.push_back(new_transaction);
    }
    return current_list;
}

int main() {
    Sales_item item1, next_transaction;
    std::vector<Sales_item> books_sold;

    std::cout << "Enter transactions: ISBN quantity price: " << std::endl;

    if (std::cin >> item1) {
        std::cout << "Accepted: " << item1 << "\n" << std::endl;
        books_sold.push_back(item1);
    } else {
        std::cout << "Invalid input. Exiting." << std::endl;
        return 1;
    }

    while (std::cin >> next_transaction) {
        item1 += next_transaction;
        books_sold = add_transaction(next_transaction, books_sold);
        std::cout << "Accepted: " << next_transaction << "\n" << std::endl;
    }

    std::cout << "\nAdding them all together and printing: " << std::endl;

    for (Sales_item item : books_sold) {
        std::cout << "ISBN: " << item.isbn() << ", Units sold: " << item.get_units_sold();
        std::cout << ", Revenue: $" << item.get_revenue();
        std::cout << ", Avg price: $" << item.avg_price() << std::endl;
    }

    return 0;
}