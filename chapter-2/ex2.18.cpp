#include <iostream>

int main() {

    int y = 100, *int_ptr = &y;
    std::cout << "y = " << y << ", int_ptr = " 
              << int_ptr << ", *int_ptr = " << *int_ptr << std::endl;

    int x = 150;
    int_ptr = &x;
    std::cout << "After changing value of int_ptr to point to &x: " << std::endl;
    std::cout << "x = " << x << ", int_ptr = " << int_ptr
              << ", *int_ptr = " << *int_ptr << std::endl;
    
    *int_ptr = 66;
    
    std::cout << "After changing value at the address int_ptr points to to 66: " 
              << std::endl;
    std::cout << "x = " << x << ", int_ptr = " << int_ptr
              << ", *int_ptr = " << *int_ptr << std::endl;

    return 0;
}