#include <iostream>

int main() {
	int i = 0, &r = i;
	std::cout << "i = " << i << ",   i addy = " << &i << "\n";
	
	auto a = r;
	std::cout << "a = " << a << ",   a addy = " << &a << "\n";
	std::cout << "So a is an int whose value was copied from i via reference r.\n";

	const int ci = i, &cr = ci;
	std::cout << "ci = " << ci << ", ci addy = " << &ci << ", cr = " << cr << "\n";
	std::cout << "ci is a const int whos value was copied from i. cr is a reference to const int ci.\n";

	auto b = ci;
	std::cout << "b = " << b << ",   b addy = " << &b << "\n";

	auto c = cr;
	std::cout << "c will equal the value in ci, and will be nonconst int. confirmed: ci = " << ci << ", c = " << c << "\n";

	auto d = &i;
	std::cout << "d will be a pointer to int i. no top-level or bottom-level const.\n";
	

	auto e = &ci;
	std::cout << "e will be pointer to const int. The const in ci is preserved, since it is low level.\n";
	std::cout << "*e = " << *e << "\n";

	const auto *p2 = &ci;
	std::cout << "p2 is a pointer to const int ci.\n";

	auto &g = ci;
	std::cout << "g is reference to const int ci.\n";
	
	// BEGIN EXERCISE BELOW:
	

	a = 42; 
	std::cout << "a, an int variable object, is changed to hold 42. a = " << a << "\n";

	b = 42; 
	std::cout << "b, an int variable object, is changed to hold 42. b = " << b << "\n";

	c = 42;
	std::cout << "c, an int variable object, is changed to hold 42. c = " << c << "\n";

	//d = 42;
	std::cout << "This will error out, as we are assigning an int to an int*.\n";

	//e = 42;
	std::cout << "This will error out, as we are assigning an int to an int*.\n";

	//g = 42;
	std::cout << "This will error out, as we are trying to change the value of a const.\n";


	

	return 0;
}
