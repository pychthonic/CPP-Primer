#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<int> ivec1 {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	vector<int> ivec2(10, 42);
	vector<int> ivec3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	
	cout << "Method used for ivec2 is preferred -- it's easier to read and write.\n";



	return 0;
}
