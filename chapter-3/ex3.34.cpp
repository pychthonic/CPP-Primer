#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {

	int a1[5] = {2, 4, 6, 8, 10};
	int *pa1 = a1, *pa2 = a1 + 2;
	cout << "pa1 addy = " << pa1 << "\n";
	cout << "pa2 addy = " << pa2 << "\n";
	pa1 += pa2 - pa1; 				// This might set p1 to equal p2.	
	cout << "pa1 addy = " << pa1 << "\n";
	cout << "pa2 addy = " << pa2 << "\n";
	// But what if p1 is at a higher address than p2?
	pa1 = a1 + 2;
	pa2 = a1;
	cout << "pa1 addy = " << pa1 << "\n";
	cout << "pa2 addy = " << pa2 << "\n";
	pa1 += pa2 - pa1;
	cout << "pa1 addy = " << pa1 << "\n";
	cout << "pa2 addy = " << pa2 << "\n";
	// It works on this computer. I'd still be nervous that it would create an out-of-bounds
	// error on some machines.

	return 0;
}
