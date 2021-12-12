#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main() {
	string s1;
	cout << "Enter a string of input: ";
	getline(cin, s1);
	cout << "Here's your string without punctuation:\n";
	for (auto &c: s1) {
		if (!ispunct(c))
			cout << c;
	}
	cout << "\n";



	return 0;
}
