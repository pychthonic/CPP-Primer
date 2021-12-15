#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<int> ivec;
	int nextInt;

	cout << endl;

	cout << "Enter some integers, or a non-integer when done:\n";
	
	while (cin >> nextInt) {
		ivec.push_back(nextInt);
	}

	cout << endl;

	if (ivec.size() > 1) {
		unsigned currIndex = 1;
		for (currIndex; currIndex < ivec.size(); ++currIndex) {
			int sum1 = ivec[currIndex] + ivec[currIndex - 1];
			cout << sum1 << " ";
		}
	}

	cout << endl;

	if (ivec.size() > 1) {
		unsigned leftIndex = 0, rightIndex = ivec.size() - 1;
		while (leftIndex <= rightIndex) {
			int sum2 = ivec[leftIndex] + ivec[rightIndex];
			cout << sum2 << " ";
			leftIndex++;
			rightIndex--;
			if (leftIndex == rightIndex) {
				cout << ivec[leftIndex];
				break;
			}
		}
	}
	cout << endl;

	return 0;
}
