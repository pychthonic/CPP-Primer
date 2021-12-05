#include <iostream>

int main() {

	const int i = 10;

	const int v2 = 0;  
	int v1 = v2;  
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;


	r1 = v2; // legal. r1 remains a reference to v1, so this is actually assigning the value 0 to v1.
	p1 = p2; // illegal, can't make nonconst pointer point to const
	p2 = p1; // legal
	p1 = p3; // illegal. can't make nonconst pointer point to const.
	p2 = p3; // legal.

	return 0;
}
