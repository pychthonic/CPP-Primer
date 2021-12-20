#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size; ++ix) // indexing error: array_size will be 10 on the last iteration, which is out of bounds of the array.
		ia[ix] = ix;



	return 0;
}
