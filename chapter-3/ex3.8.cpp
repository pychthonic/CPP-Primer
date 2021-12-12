#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main() {
	string s1 = "hello world.";
	cout << "s1 before for loop:             " << s1 << endl;
	for (auto &c: s1){
		c = 'X';
	}
	cout << "s1 after for loop:              " << s1 << endl;

	s1 = "hello world.";
	cout << "Resetting s1 to 'hello world'.\n";
	cout << "s1 before while loop:           " << s1 << endl;
	decltype(s1.size()) s1Size = s1.size();
	
	while (s1Size != 0) {
		s1Size--;
		s1[s1Size] = 'X';
	}
	cout << "s1 after while loop:            " << s1 << endl;
	
	s1 = "hello world.";
	cout << "Resetting s1 to 'hello world.'\n";
	cout << "s1 before traditional for loop: " << s1 << endl;
	
	s1Size = s1.size();
	for (decltype(s1.size()) i = 0; i <  s1Size; ++i) {
		s1[i] = 'X';
	}
	cout << "s1 after traditional for loop:  " << s1 << endl;
	
	// I obviously prefer the range for loop, as it's the easiest to both write and read.
	
	return 0;
}
