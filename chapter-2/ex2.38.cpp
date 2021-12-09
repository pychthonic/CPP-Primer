#include <iostream>

int main() {

	// auto seems like a more general way for the compiler to guess the type of a variable.
	// decltype relies on the form of what is passed, and differs when an expression is passed.
	// decltype also returns a reference if it is passed a pointer. See examples below.
	
	int i = 8;
	auto i_auto = i; // i_auto is an lvalue int.
	decltype(i) i_decltype = i; // i_decltype is an lvalue int.

	std::cout << "\n&i: 	     " << &i;
	std::cout << "\n&i_auto:     " << &i_auto;
	std::cout << "\n&i_decltype: " << &i_decltype << "\n";

	int *i_ptr = &i;
	auto i_auto_ptr = *i_ptr; // i_auto_ptr is an int
	decltype(*i_ptr) i_decltype_ptr = i; // i_decltype_ptr is a reference to i.

	std::cout << "&i_auto_ptr:     " << &i_auto_ptr << "\n";
	std::cout << "&i_decltype_ptr: " << &i_decltype_ptr << "\n";

	if (&i_decltype_ptr == &i)
		std::cout << "&i_decltype_ptr = &i\n";
	else
		std::cout << "oops\n";	
	


	return 0;
}
