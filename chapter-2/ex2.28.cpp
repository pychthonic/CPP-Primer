#include <iostream>

int main() {

    // int i, *const cp; // illegal -- top-level const pointers must be initialized. 
    // int* p1, *const p2; // illegal -- top-level const pointers must be initialized.
    // const int ic, &r = ic; // illegal -- const int must be initialized. 
    // const int* const p3; //illegal --  top-level const pointers must be initialized.
    const int* p; // legal -- This low-level const can be initialized to an int,
                // even though the programmer can't change that int through p.

    // Exercise 2.29:

    // none of these assignments will work, since none of the variables aside from p
    // were successfully initialized in exercise 2.28.



    return 0;
}