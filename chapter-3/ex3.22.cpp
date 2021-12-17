#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<string> text = {"This is the first sentence.", "Second sentence...",
			       "Third sentence......", "", "Next paragraph starts here.",
			       "And continues...", "", "The end."};
	cout << "\nBefore any changes to text, this is the first paragraph:\n\n";

	for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it) {
		cout << *it << endl;
	}

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
		for (auto cit = (*it).begin(); cit != (*it).end(); ++cit) {
			*cit = toupper(*cit);
		}
	}
	cout << "\nAfter capitalizing first paragraph, here is the entire text:\n\n";

	for (auto it = text.begin(); it != text.end(); ++it) {
		cout << *it << endl;
	}

	cout << endl;



	return 0;
}
