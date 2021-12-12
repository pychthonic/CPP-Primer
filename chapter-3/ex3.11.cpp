#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main() {
	const string s = "Keep out!";
	for (auto &c: s) {
		cout << c;
	}
	cout << "\nThis is legal, as long as you don't try to change c inside the range for loop.\n";



	return 0;
}
