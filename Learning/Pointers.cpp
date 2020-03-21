#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Pointers() {
	int myVar = 8;

	// The following pointer shows the memory address where the value 8 from myVar is stored.
	void* ptr = &myVar; // ptr has de memory address 0x003fe04 but this pointer cannot be dereferenced as its type is void.
	LOG(ptr);
	
	int* ptr1 = &myVar; // ptr1 stores the same address as ptr, but its value can be changed as is typed as integer.
	LOG(ptr1);
	
	// Using the operator * before the pointer, shows the value of the pointer instead of the memory address.
	LOG(*ptr1);
	*ptr1 = 5;

}