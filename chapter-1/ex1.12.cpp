#include <iostream>

/*
The following code adds up all integers between -100 and 100, inclusive.
The variable sum at the end of the for loop will equal zero.
*/

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    return 0;
}