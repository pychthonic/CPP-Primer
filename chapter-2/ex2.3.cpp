#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << "unsigned u = " << u << ", unsigned u2 = " << u2 << std::endl;
    std::cout << "u2 - u = " << u2 - u << std::endl; // 32
    std::cout << "         u - u2 = " << u - u2 << std::endl; // Overflow! this will return (UINT32_MAX - 31):
    std::cout << "UINT32_MAX - 31 = " << UINT32_MAX - 31 << std::endl;
    

    int i = 10, i2 = 42;
    std::cout << "int i = " << i << ", int i2 = " << i2 << std::endl;
    std::cout << "i2 - i = " << i2 - i << std::endl;  // 32
    std::cout << "i - 12 = " << i - i2 << std::endl;  // -32
    
    std::cout << "i - u = " << i - u << std::endl;  // Bad bad bad mixing unsigned and signed: result is still 0.
    std::cout << "u - i = " << u - i << std::endl; // Bad bad bad, this time i is cast to unsigned so the result is
                                    // 0
    std::cout << "i - u2 = " << i - u2 << std::endl; // Bad bad bad, this time there's overflow.
                                                     // Result will be UINT32_MAX - 31

    return 0;
}