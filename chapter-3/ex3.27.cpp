#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int text_size() {
	return 5;
}

int main() {
	unsigned buf_size = 1024;
	int ia[buf_size];	// not illegal but produces undefined behavior on some machines.
	int ia2[4 * 7 - 14];  	// fine
	int ia3[text_size()];     // fine
	// char st[11] = "fundamental"; // illegal -- that string literal needs 12 chars to make room for the null pointer at the end.




	return 0;
}
