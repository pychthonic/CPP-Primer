#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<int> ivec;
	int nextInt;

	cout << endl;

	cout << "Enter some integers, or a non-integer when done:\n";
	
	while (cin >> nextInt)
		ivec.push_back(nextInt);

	cout << endl;

	if (ivec.size() > 1) {
		for (auto it = ivec.begin(); (it + 1) != ivec.end(); ++it) {
			int sum1 = *it + *(it + 1);
			cout << sum1 << " ";
		}
	} else {
		cout << "Enter more than one int for calculations.\n";
	}

	cout << endl;

	if (ivec.size() > 1) {
		cout << "Longwinded way:\n";
		auto it_right = ivec.end();
		--it_right;
		auto it_left = ivec.begin();
		while (it_right != it_left) {
			int sum2 = *it_left + *it_right;
			cout << sum2 << " ";
			++it_left;
			if (it_left == it_right) {
				break;
			}
			--it_right;
			if (it_left == it_right) {
				cout << *it_left << " ";
			}
		}
		cout << "\nConcise method:\n";
		for (auto il = ivec.begin(), ir = ivec.end() - 1; il <= ir; ++il, --ir) {
			if (il != ir)
				cout << *il + *ir << " ";
			else
				cout << *il << " ";
		}
	}
	cout << endl;

	return 0;
}
