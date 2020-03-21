#include <iostream>

#define LOG(x) std::cout << x std::endl;

void IncrementByPointer(int* value) {

	// As the funcion takes as an argument a pointer, it is necessary to dereferenciate it.
	(*value)++; // Also, put parentesis before the ++ to increment the dereferenced value. If not, what you do is
	// to increment the value of the memory address and then derefrence it, which is wrong.
}

void IncrementByReference(int& value) {
	value++;
}

void References() {
	int a = 5;
	int* ptr = &a; // This pointer is saving the memory address of variable a as an integer
	int& ref = a; // Reference ref is an alias that contains the value of variable a
	IncrementByPointer(&a);
	IncrementByReference(a);

	// IMPORTANT: Differently as it happens with pointers, references cannot switch the location they are referencing.
	// Example:
	int b = 8;
	int c = 10;

	int& ref1 = b;
	ref1 = c; // What this will do is to set the value of b to the value of c (b will be now 10).

	// The right way of changing the direction a reference is pointing to is not with a reference but with a pointer:
	int d = 8;
	int e = 10;

	int* ptr1 = &d;
	ptr1 = &e; // Here ptr1 will change from 8 to 10 leaving variable d being 8.
	std::cin.get();
}