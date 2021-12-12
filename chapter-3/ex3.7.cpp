#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main() {
	string s1 = "hello world.";
	cout << "s1 before for loop: " << s1 << endl;
	for (char c: s1){ // This will just make a copy of each character in s1 and change the copy.
			  // It won't change any of s1's values.
		c = 'X';
	}
	cout << "s1 after for loop:  " << s1 << endl;



	return 0;
}
