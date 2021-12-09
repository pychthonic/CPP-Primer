#include <iostream>

int main() {
	int i = 42, *p = &i, &r = i;
	decltype(r + 0) b;
	b = 5;
	std::cout << "b = " << b << "\n";
	
	// decltype(*p) c;
	// So this is the first time C++ seems to be making up arbitrary rules that don't follow logic
	// that has already been laid down. In no other context does *p return a reference. References were
	// defined earlier as being a stand-in for another object, which is different from what pointers are,
	// whether those pointers are "dereferenced" or not. A dereferenced pointer is NOT a reference to an 
	// object, it returns the value of the object itself.
	// But apparently if you put a dereferenced pointer inside decltype, it returns a reference. decltype(*p)
	// should return the type of what *p does when you use is, which is an int. Hopefully I'm either missing
	// something or there aren't any other types of rules like this. All the other rules I've learned about
	// C++ might be complicated at first, but they don't do arbitrary or random things like this one seems
	// to do -- they make sense after you think about them for a while.



	return 0;
}
