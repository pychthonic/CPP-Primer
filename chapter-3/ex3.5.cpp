#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main() {
	string s1, cat_string;
	while (getline(cin, s1)) {
		if (!s1.size())
			break;
		cat_string += s1;
	}

	cout << "Concatenated string: " << cat_string << "\n";



	return 0;
}
