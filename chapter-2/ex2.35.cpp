#include <iostream>

int main() {
	const int i = 42;
	std::cout << "i is const int, duh.\n";
	auto j = i;
	std::cout << "j is nonconst int.\n";
	j = 5;
	std::cout << "changed j, now it is " << j << "\n";
	const auto &k = i;
	std::cout << "k is reference to const int.\n";
	//k = 10;
	std::cout << "uncommenting last line causes CTE.\n";
	auto *p = &i;
	std::cout << "p is pointer to const int i.\n";
	const auto j2 = i, &k2 = i;
	std::cout << "j2 is const int copied from i. k2 reference to const int i.\n";


	return 0;
}
