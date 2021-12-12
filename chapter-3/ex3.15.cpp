#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<vector<string>> lineVector;
	vector<string> newVector;
	string nextLine, nextWord;
	cout << "Enter some lines, or an empty line when finished.\n";
	while (getline(cin, nextLine)) {
		if (!nextLine.empty()) {
			for (auto &c: nextLine) {
				if (c == ' ') {
					newVector.push_back(nextWord);
					nextWord.clear();
				} else {
					nextWord += c;
				}
			}
			newVector.push_back(nextWord);
			nextWord.clear();
		lineVector.push_back(newVector);
		newVector.clear();
		} else {
			break;
		}
	}

	for (vector<string> v : lineVector) {
		for (string word : v) {
			cout << word << "  ";
		}
		cout << endl;
	}


	return 0;
}
