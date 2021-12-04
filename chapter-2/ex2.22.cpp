#include <iostream>

int main() {
	int *p = nullptr;
	if (p) {
		std::cout << "p points to a memory address.\n";
		if (*p)
			std::cout << "p points to a nonzero int.\n";
	} else {
		std::cout << "p points to a nullptr.\n";
	}
	int i = 5;
	p = &i;
	if (p)
		std::cout << "p points to a memory address.\n";
	if (*p)
		std::cout << "p points to a nonzero int.\n";
	return 0;
}

