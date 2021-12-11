#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_item item1, next_transaction;


    std::cout << "Enter transactions, ISBN quantity price: " << std::endl;

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

 	Sales_data book1;

	std::cout << "\nTitle: ";
	std::getline(std::cin, book1.bookTitle);
	std::cout << "ISBN: ";
	std::cin >> book1.bookISBN;
	std::cout << "Price: ";
	std::cin >> book1.bookPrice;
	std::cout << "How many copies of " << book1.bookTitle << " are there in stock? ";
	std::cin >> book1.inventoryCount;

	std::cout << "\nNew book entry:\n\nTitle: " << book1.bookTitle << "\nISBN: " << book1.bookISBN;
	std::cout << "\nPrice: " << book1.bookPrice << "\nInventory Count: " << book1.inventoryCount << "\n\n";

   
    
    return 0;
}
