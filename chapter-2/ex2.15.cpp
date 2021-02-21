#include <iostream>


int main() {
    int ival = 1.01; // legal
    // int &rval1 = 1.01; // ERROR IF UNCOMMENTED: cannot assign a reference to a literal
    int &rval2 = ival; // legal
    // int &rval3; // ERROR IF UNCOMMENTED: references must be initialized

    return 0;
}