#include <iostream>

extern int ix = 1024;   // definition -- g++ produces a warning, but not an error.
int iy;                 // declaration
extern int iz;          // declaration

int main() {
    // extern int ix = 1024;   // ERROR IF UNCOMMENTED
    std::cout << "extern int ix = " << ix << std::endl;
    return 0;
}