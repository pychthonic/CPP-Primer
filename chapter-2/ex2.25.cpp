#include <iostream>

int main() {

	int *ip, i, &r = i;    // ip is an int pointer which does not point to any object, i is an undefined int, r is a reference to int i.
	int i, *ip = 0;		// i is an undefined int, ip is an int pointer which does not point to any object.
	int *ip, ip2;		// ip is an int pointer that does not point to any int, ip2 is an undefined int.

	return 0;
}
