
#include <iostream>


int main()
{
	int* d = createDangling();
	// d now points to memory that is no longer valid (dangling)
	std::cout << "Dangling pointer value (undefined): " << *d << "\n"; // UB

	int* s = createSafe();
	std::cout << "Safe pointer value: " << *s << "\n";
	delete s; // free heap memory

	return 0;
}
