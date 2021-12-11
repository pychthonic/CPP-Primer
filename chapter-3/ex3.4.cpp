#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	if (s1 == s2)
		cout << "Strings are equal.\n";
	else
		cout << "Strings not equal.\n";
	
	if (s1.size() == s2.size())
		cout << "Strings size equal.\n";
	else {
		cout << "Strings size not equal.\n";
		if (s1.size() > s2.size())
			cout << "First string is longer.\n";
		else
			cout << "Second string is longer.\n";
	}

	return 0;
}
