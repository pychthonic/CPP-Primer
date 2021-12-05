#include <iostream>

int main() {
	
	const int buff;    // illegal -- consts must be initialized.
	int cnt = 0;		// legal
	const int sz = cnt;  	// legal
	++cnt; ++sz;		// ++cnt is legal, ++sz is illegal.



	return 0;
}
