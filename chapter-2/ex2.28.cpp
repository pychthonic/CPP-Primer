#include <iostream>

int main() {
	
	int i, *const cp; // illegal. i is an int. cp is a const pointer to int, and needs to be initialized.
	int *p1, *const p2; // illegal. p1 is a pointer to int. p2 is a const pointer to int, but const pointers must be initialized.
	const int ic, &r = ic; // illegal. ic is a const int, so must be initialized. r is a reference to ic.
	const int *const p3;   // illegal. p3 is a const pointer to const int, but needs to be initialized.
	const int *p;	// legal. p is a pointer to const int.



	return 0;
}
