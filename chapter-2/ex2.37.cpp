#include <iostream>

int main() {
	int a = 3, b = 4;

	decltype(a) c = a;
	std::cout << "c is an lvalue int with value 3\n";
	std::cout << "c = " << c << ", a = " << a << "\n";

	decltype(a = b) d = a;
	std::cout << "d is an int& pointing to a.\n";
	std::cout << "d = " << d << "\n";
	std::cout << "&d = " << &d << ", &a = " << &a << "\n";
	if (&d == &a)
		std::cout << "&d = &a\n";
	else
		std::cout << "&d != &a but we know that's not the case.\n";


	return 0;
}
