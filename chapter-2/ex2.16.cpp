#include <iostream>


int main() {
    int i = 5, &r1 = i;
    double d = 0, &r2 = d;

    std::cout << "i: " << i << ", r1: " << r1 
              << ", d: " << d << ", r2: " << r2 << std:: endl;

    r2 = 3.14159;  // valid
    
    std::cout << "i: " << i << ", r1: " << r1 
            << ", d: " << d << ", r2: " << r2 << std:: endl;
    
    r2 = r1;       // valid -- this is assigning the value behind i to d.
                   // It is not re-assigning r2.

    std::cout << "i: " << i << ", r1: " << r1 
            << ", d: " << d << ", r2: " << r2 << std:: endl;

    i = r2;        // valid
    r1 = d;        // valid

    std::cout << "i: " << i << ", r1: " << r1 
              << ", d: " << d << ", r2: " << r2 << std:: endl;

    double dval = 3.14;
    int &refVal5 = i;
    refVal5 = dval;    // valid


    return 0;
}