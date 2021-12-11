#include <iostream>
#include "Sales_data.h"

int main() {
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
