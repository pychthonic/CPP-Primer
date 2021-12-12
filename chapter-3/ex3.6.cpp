#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main() {
	string s1 = "hello world.";
	cout << "s1 before for loop: " << s1 << endl;
	for (auto &c: s1){
		c = 'X';
	}
	cout << "s1 after for loop:  " << s1 << endl;



	return 0;
}
