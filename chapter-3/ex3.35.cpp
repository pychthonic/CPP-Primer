#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector, std::begin, std::end;

int main() {
	int ia[] = {1, 3, 5, 10, 9};
	int *ipb = begin(ia), *ibe = end(ia);
	int *ip = ipb;
	
	cout << "Values of ia before getting set to zero:\n";
	while (ip != ibe) {
		cout << *ip << " ";
		++ip;
	}

	ip = ipb;
	while (ip != ibe) {
		*ip = 0;
		++ip;
	}
	cout << "\nValues of ia after getting set to zero:\n";

	ip = ipb;
	while (ip != ibe) {
		cout << *ip << " ";
		++ip;
	}

	cout << endl;



	return 0;
}
