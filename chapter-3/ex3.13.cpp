#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

int main() {
	vector<int> v1;	
	cout << "v1 has 0 elements\n";
	vector<int> v2(10); 
	cout << "v2 has 10 empty int elements.\n";
	cout << "v2[5]: " << v2[5] << endl;
	vector<int> v3(10, 42);
	cout << "v3 has 10 elements, each with value 42.\n";
	cout << "v3[4]: " << v3[4] << endl;
	vector<int> v4{10}; 
	cout << "v4 has one element of value 10.\n";
	cout << "v4[0]: " << v4[0] << endl;
	vector<int> v5{10, 42};	
	cout << "v5 has 2 elements: first one of value 10, 2nd of value 42.\n";
	cout << "v5[0]: " << v5[0] << ", v5[1]: " << v5[1] << endl;
	vector<string> v6{10};
	cout << "v6 has 10 empty string elements.\n";
	cout << "v6[5]: " << v6[5] << endl;
	vector<string> v7{10, "hi"};
	cout << "v7 has 10 string elements, of value 'hi'\n";
	cout << "v7[9]: " << v7[9] << endl;


		



	return 0;
}
