#include <iostream>

int main() {

	int i = 42;
	void *p = &i; // legal, as a void* can point to any type of object.
	long *lp = &i; // illegal, as a long int object may or may not use up more bits
			// in memory than an int, depending on what system this code is
			// run inside of. This will therefore produce undefined behavior.
	
	return 0;
}
