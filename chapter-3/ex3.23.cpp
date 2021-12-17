#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<int> ivec = {1, 3, 2, 6, 10, 11, 16, 3, 0, -5};
	cout << "\nInitial vector:\n\n";
	for (auto it = ivec.begin(); it != ivec.end(); ++it) {
		cout << *it << " ";
	}
	cout << "\n\n";
	for (auto it = ivec.begin(); it != ivec.end(); ++it) {
		*it = *it * 2;
	}
	cout << "After doubling each value in the vector:\n\n";
	for (auto it = ivec.cbegin(); it != ivec.cend(); ++it) {
		cout << *it << " ";
	}
	cout << "\n\n";


	return 0;
}
