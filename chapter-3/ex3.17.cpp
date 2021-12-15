#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {

	vector<string> stringVector;
	string nextWord;
	cout << "\nEnter some words, or 'DONE' when finished:\n\n";
	while (cin >> nextWord) {
		if (nextWord == "DONE")
			break;
		stringVector.push_back(nextWord);
	}
	for (auto &w: stringVector) {
		if (w.size()) {
			for (auto &c: w) {
				c = toupper(c);
			}
		}
	}
	unsigned wordCount = 0;
	for (auto &w: stringVector) {
		if (wordCount < 8) {
			cout << w << " ";
			wordCount++;
		} else {
			cout << "\n" << w << " ";
			wordCount = 1;
		}
	}
	cout << "\n\n";
	


	return 0;
}
