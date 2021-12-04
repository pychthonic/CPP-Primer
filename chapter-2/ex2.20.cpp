#include <iostream>

// This program declares a variable i as an int of value 42. It then squares it,
// using pointers. So at the end of the program i = 42 squared.

int main() {
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1;

	return 0;
}
