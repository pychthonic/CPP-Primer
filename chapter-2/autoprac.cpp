#include <iostream>

int main() {
	int i = 3, &r = i;
	std::cout << "i = " << i << ",   i addy = " << &i << "\n";
	
	auto a = r;
	std::cout << "a = " << a << ",   a addy = " << &a << "\n";
	std::cout << "So a is an int whose value was copied from i via reference r.\n";

	const int ci = i, &cr = ci;
	std::cout << "ci = " << ci << ", ci addy = " << &ci << ", cr = " << cr << "\n";
	std::cout << "ci is a const int whos value was copied from i. cr is a reference to const int ci.\n";

	auto b = ci;
	std::cout << "b = " << b << ",   b addy = " << &b << "\n";

	b = 50;
	std::cout << "b is an int and unlike ci, is not const. We confirm this by changing it to 50. b = " << b << "\n";
	std::cout << "This is because auto ignores top-level const.\n";

	auto c = cr;
	std::cout << "c will equal the value in ci, and will be nonconst int. confirmed: ci = " << ci << ", c = " << c << "\n";
	c = 15;
	std::cout << "c changed to 15. c = " << c << ", ci still equal 3. ci = " << ci << "\n";

	auto d = &i;
	std::cout << "d will be a pointer to int i. no top-level or bottom-level const.\n";
	
	*d = 11;
	std::cout << "dereferenced value pointed to by d changed to 11. *d = " << *d << ", i = " << i << "\n";

	d = &b;
	std::cout << "address of d changed to b. *d = " << *d << "\n";
	
	auto e = &ci;
	std::cout << "e will be pointer to const int. The const in ci is preserved, since it is low level.\n";
	std::cout << "*e = " << *e << "\n";
	//*e = 44;
	std::cout << "*e changed to 44. This predictably produced an error so I commented it out.\n";

	const auto *p2 = &ci;
	std::cout << "p2 is a pointer to const int ci.\n";
	


	return 0;
}
