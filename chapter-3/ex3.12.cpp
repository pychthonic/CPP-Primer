#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<vector<int>> ivec;  // no error
	//vector<string> svec = ivec; // error: vector type mismatch
	vector<string> svec(10, "null"); // no error



	return 0;
}
