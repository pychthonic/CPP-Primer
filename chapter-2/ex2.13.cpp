#include <iostream>

// This code is perfectly legal, it just doesn't follow best
// practices, in that it re-uses a variable of the same name.
// The outer-scoped i could be named something else to make 
// the code more readable. 


int main() {
    int i = 100, sum = 0; 
    for (int i = 0; i != 10; ++i)
        sum += 1;
    std::cout << "i = " << i << " " << sum << std::endl;

    return 0;
}