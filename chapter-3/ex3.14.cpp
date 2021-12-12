#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<int> ivec;
	int newNum;
	cout << "Enter some integers separated by spaces, or DONE when finished:" << endl;
	while (cin >> newNum)
		ivec.push_back(newNum);

	cout << "Here's the ints you entered:" << endl;

	for (int i: ivec)
		cout << i << " ";
	cout << endl;


	return 0;
}
