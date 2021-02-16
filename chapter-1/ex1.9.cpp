#include <iostream>

int main() {
    int sum = 0;
    int num = 50;
    while (num <= 100) {
        sum += num;
        ++num;
    }
    std::cout << "The sum of all numbers between 50 and 100 is " << sum << std::endl;
    return 0;
}