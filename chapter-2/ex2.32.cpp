#include <iostream>

/*

*p cannot be assigned to null. It should be assigned to &null.

null is a valid variable name. 

*/

/*
 * Not sure how this exercise is relevant to the preceding reading material's
 * subject matter.
 * */

int main() {

    
    int null = 77;
    int* p = &null;

    std::cout << "null: " << null << std::endl;

    std::cout <<"*p: " << *p << std::endl;



    return 0;
}
