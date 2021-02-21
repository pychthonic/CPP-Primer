#include <iostream>

int main() {
    unsigned u1 = 32, u2 = 10;
    std::cout << "u2 - u1 = " << u2 - u1 << std::endl;
    std::cout << "unsigned int max: " << UINT32_MAX << std::endl;

    int i = 42;
    int *p;
    p = &i;
    std::cout << "*p = " << *p << std::endl;
    *p = i;  // redundant but valid
    std::cout << "*p = " << *p << std::endl;
    i = i;   // redundant but valid

    std::cout << "i = " << i << std::endl;

    return 0;
}