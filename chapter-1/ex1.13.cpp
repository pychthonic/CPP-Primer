#include <iostream>

int main() {

    // Exercise 1.9 with for loop:

    int sum = 0;
    int num = 50;
    for (num = 50; num <= 100; ++num) {
        sum += num;
    }
    std::cout << "The sum of all numbers between 50 and 100 is " << sum << std::endl;

    // Exercise 1.10 with for loop:

    num = 10;
    std::cout << "Now, counting from 10 to 0:\n" << std::endl;

    while (num >= 0) {
        std::cout << num << std::endl;
        --num;  
    }

    // Exercise 1.11 with for loop:

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
    for (int i = num1; i <= num2; ++i) {
        std::cout << i << " ";
    }

    std::cout << "\n\n";

    return 0;
} 