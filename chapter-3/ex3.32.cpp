#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;



int main() {

	// Using arrays:
	
	int ia[10];
	unsigned ind = 0;
	for (auto &i: ia) {
		i = ind;
		++ind;
	}
	ind = 0;
	int ia2[10];
	for (auto &i2: ia2) {
		i2 = ia[ind];
		++ind;
	}

	cout << "\nPrinting first array:\n";
	for (auto i: ia)
		cout << i << " ";

	cout << "\n\nPrinting 2nd array:\n";
	for (auto i: ia2)
		cout << i << " ";

	cout << endl << endl;

	// using vectors:

	int iv[10];
	ind = 0;
	for (auto &i: iv) {
		i = ind;
		++ind;
	}
	ind = 0;
	int iv2[10];
	for (auto &i2: iv2) {
		i2 = iv[ind];
		++ind;
	}

	cout << "\nPrinting first vector:\n";
	for (auto i: iv)
		cout << i << " ";

	cout << "\n\nPrinting 2nd vector:\n";
	for (auto i: iv2)
		cout << i << " ";

	cout << endl << endl;


	return 0;
}
