#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			auto it = scores.begin();
			it += (grade / 10);
			++(*it);
		}
	}

	unsigned count = 0;
	for (auto it = scores.begin(); it != scores.end(); ++it) {
		if (count != 100) {
			cout << count << "-" << count + 9 << ": " << *it << endl;
			count += 10;
		} else {
			cout << count << ": " << *it << endl;
		}
	}



	return 0;
}
