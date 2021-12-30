#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector, std::begin, std::end;

// Note that this function compares the two arrays at the bit-level, which means it's theoretically
// possible for two arrays of different types to be declared "equal", as long as their elements
// contain the same number of bits.
bool int_arrays_equal(int *ia1, size_t s1, int *ia2, size_t s2) {
	
	if (s1 != s2)
		return false;
	for (size_t i = 0; i < s1; ++i) {
		if (ia1[i] != ia2[i])
			return false;
	}
	return true;	

}

int main() {
	int ia1[] = {1, 3, 5, 10, 9};
	int ia2[] = {1, 3, 5, 10, 9};
	
	if (int_arrays_equal(ia1, sizeof(ia1) / 4, ia2, sizeof(ia2)/4))
		cout << "\nArrays are equal.\n";
	else
		cout << "\nArrays are not equal.\n";

	vector<int> iv1 = {1, 13, 5, 10, 9};
	vector<int> iv2 = {1, 3 ,5 ,10, 9};

	if (iv1 == iv2)
		cout << "\nVectors are equal.\n";
	else
		cout << "\nVectors are not equal.\n";

	return 0;
}
