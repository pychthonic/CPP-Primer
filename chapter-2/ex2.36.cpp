#include <iostream>

int main() {

	int a = 3, b = 4;
	decltype(a) c = a;  // c is an int of value 3
	decltype((b)) d = a; // d is an int&, pointing to a, so its value at this point is 3

	std::cout << "a = " << a << ", c = " << c << ", d = " << d << "\n";

	++c;
	std::cout << "now, a = 3 and c = 4\n";

	std::cout << "a = " << a << ", c = " << c << ", d = " << d << "\n";

	++d;
	std::cout << "now, d = 4, and a = 4\n";
	std::cout << "a = " << a << ", c = " << c << ", d = " << d << "\n";



	return 0;
}
