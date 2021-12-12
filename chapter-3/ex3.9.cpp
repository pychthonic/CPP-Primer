#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main() {
	
	string s;
	cout << s[0] << endl;

	// If this program was compiled for C++11, it would produce undefined behavior,
	// as s is initialized to an empty string, and s[0] thus is dereferencing an
	// out-of-bounds pointer.
	// However, as I'm compiling for C++17, the new rules are that if the index of
	// the string is the same as the size of the array, reading from it produces a
	// default constructed char type, which means we can read from it, but we cannot
	// write to it.



	return 0;
}
