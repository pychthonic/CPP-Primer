#include <iostream>

int main() {

    int i = 0;

    // double* dp = &i;  // will not compile if uncommented. Cannot initialize a 
                    // pointer to an object of a differnet type.
    double* dp;
    dp = (double*) &i;   // if you really wanted to assign the address of i to
                    // dp, this is how you would do it, although it's obviously
                    // a bad idea.
    //int *ip = i;
    int *p = &i;    // legal

    return 0;
}