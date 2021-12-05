#include <iostream>

int main() {
	
	// Changing these so they are properly initialized:	
        
	const int const_int = 5;	

	int i, *const cp = &i; 
	int *p1, *const p2 = &i; 
	const int ic = 3, &r = ic; 
	const int *const p3 = &const_int;  
	const int *p = &ic;
	// ex 2.29:
	// Sooo if the variables above were initialized....
	i = ic; // legal 
	p1 = p3; // illegal. since p1 is nonconst, it can't point to a const int.
	p1 = &ic; // illegal. since p1 is nonconst, it can't point to a const int. 
	p3 = &ic; // illegal. assuming p3 was initialized to point to a const int other than &ic, it can't point to anything else since it's a const pointer.	

	return 0;
}
