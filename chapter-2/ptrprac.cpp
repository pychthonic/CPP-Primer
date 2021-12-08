#include <iostream>
/*
int i = 5;	
int *iptr = &i;
int j = 6;
iptr = (int*) &j;
*/

int k = 10;
int *kptr = &k;

int main() {
	const int l = 5;	
	constexpr int *lptr = &k;
	int m = 6;
	//lptr = &m;
	
	int i = 5;	
	int *iptr = &i;

	std::cout << "*iptr = " << *iptr << std::endl;
	int j = 6;
	iptr = &j;

	std::cout << "*iptr = " << *iptr << std::endl;



	return 0;
}
