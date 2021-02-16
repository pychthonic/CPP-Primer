#include <iostream>

int main() {
    int num1, num2;
    std::cout << "\nEnter first number: ";
    std::cin >> num1;
    if (std::cin.fail()) {
        std::cout << "That's not a number. Exiting." << std::endl;
        return 0;
    }
    std::cout << "\nEnter second number: ";
    std::cin >> num2;
    if (std::cin.fail()) {
        std::cout << "That's not a number. Exiting." << std::endl;
        return 0;
    }
    if (num2 <= num1) {
        std::cout << "\nSecond number must be greater than or equal to first number. Exiting." << std::endl;
        return 0;
    }
    std::cout << "\nCounting from " << num1 << " to " << num2 << ":\n" << std::endl;

    while (num1 <= num2) {
        std::cout << num1 << " ";  
        ++num1;
    }
    std::cout << "\n\n";
    return 0;
}