#include <iostream>

int main() {
    int i2; // I'm guessing they left this out since i2 is referenced multiple times in
            // these exercises.
    // int i = -1, &r = 0;   // illegal -- non-const references can't be initialized to a literal.
    int* const p2 = &i2;    // legal
    const int i = -1, &r = 0; // legal
    const int* const p3 = &i2;  // legal
    const int* p1 = &i2;    // legal
    // const int& const r2; // illegal; references must be initialized.
    const int i3 = i, &r1 = i;  // legal
    std::cout << "Success.\n";

}