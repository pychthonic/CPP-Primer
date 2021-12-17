#include <iostream>
#include <string>
#include <vector>

using std::cin, std::cout, std::endl, std::getline, std::string, std::vector;

void printVectorSizeContents(auto& v) {

	std::cout << "vector size: " << v.size() << endl;
	if (v.size()) {
		std::cout << "vector contents: \n";
		auto it = v.begin();
		while (it != v.end()) {
			std::cout << *it << " ";
			it++;
		}
		std::cout << endl << endl;
	} else {
		std::cout << "vector is empty." << endl << endl;
	}

}


int main() {
	vector<int>::iterator it;

	vector<int> v1;	
	cout << "\nv1 has 0 elements\n";
	cout << "printVectorSizeContents(v1):" << endl;
	printVectorSizeContents(v1);
	
	vector<int> v2(10); 
	cout << "v2 has 10 empty int elements.\n";
	cout << "printVectorSizeContents(v2):" << endl;
	printVectorSizeContents(v2);
	
	vector<int> v3(10, 42);
	cout << "v3 has 10 elements, each with value 42.\n";
	cout << "v3[4]: " << v3[4] << endl;
	cout << "printVectorSizeContents(v3):" << endl;
	printVectorSizeContents(v3);
	
	vector<int> v4{10}; 
	cout << "v4 has one element of value 10.\n";
	cout << "v4[0]: " << v4[0] << endl;
	cout << "printVectorSizeContents(v4):" << endl;
	printVectorSizeContents(v4);
	
	vector<int> v5{10, 42};	
	cout << "v5 has 2 elements: first one of value 10, 2nd of value 42.\n";
	cout << "v5[0]: " << v5[0] << ", v5[1]: " << v5[1] << endl;
	cout << "printVectorSizeContents(v5):" << endl;
	printVectorSizeContents(v5);
	
	vector<string> v6{10};
	cout << "v6 has 10 empty string elements.\n";
	cout << "v6[5]: " << v6[5] << endl;
	cout << "printVectorSizeContents(v6):" << endl;
	printVectorSizeContents(v6);
	
	vector<string> v7{10, "hi"};
	cout << "v7 has 10 string elements, of value 'hi'\n";
	cout << "v7[9]: " << v7[9] << endl;
	cout << "printVectorSizeContents(v7):" << endl;
	printVectorSizeContents(v7);
	

		



	return 0;
}
