#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::string;

int main() {
	string word;
	//while (cin >> word)
        //	cout << word << endl;
	
	while (getline(cin, word)) {
		if (!word.empty())
			cout << word << endl;
		else
			break;

	}
	

	return 0;
}
