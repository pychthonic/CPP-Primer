#include <iostream>

int main() {

	const int i = 10;

	const int v2 = 0;  // v2 has top-level const.
	int v1 = v2;  // v1 is not a const.
	int *p1 = &v1, &r1 = v1;    // p1 is not a const. r1 is not a const.
	const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2 has low-level const. p3 has both top-level and bottom-level const. r2 has low-level const.

	return 0;
}
