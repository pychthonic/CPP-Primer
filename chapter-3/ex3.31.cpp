#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	int ia[10];
	unsigned ind = 0;
	for (auto &i: ia) {
		i = ind;
		++ind;
	}
	cout << "Printing array:\n";
	for (auto i: ia)
		cout << i << " ";

	return 0;
}
