#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<int> ivec;
	ivec[0] = 42; // Illegal. Use push_back, as this references an index that is out-of-bounds.



	return 0;
}
