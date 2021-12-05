#include <iostream>

int main() {

	int i2 = 3;


	int i = -1, &r = 0;  // illegal. nonconst reference can't refer to a literal.
	int *const p2 = &i2; // assuming i2 is an int that was already declared, this is legal.
	const int j = -1, &r1 = 0;  // legal
	const int *const p3 = &i2;  // legal
	const int *p1 = &i2;		// legal
	const int &const r2;		// illegal. references must be initialized. Also, there's no such thing as &const, since references aren't objects.
	const int i3 = i, &r3 = i;	// legal

	return 0;

}
