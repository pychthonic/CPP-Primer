#include <iostream>

constexpr int get_size() {
	int ret_val = 7 + 5;
	return ret_val;
}


int main() {
	constexpr const int twelve = get_size();
	std::cout << "twelve: " << twelve << std::endl;
	return 0;
}



