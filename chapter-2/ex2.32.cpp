#include <iostream>

/*

*p cannot be assigned to null. It should be assigned to &null.

null is a valid variable name. 

*/

int main() {

    
    int null = 77;
    int* p = &null;

    std::cout << "null: " << null << std::endl;

    std::cout <<"*p: " << *p << std::endl;



    return 0;
}