
#include <iostream>


int main()
{
	// just add if p!=nullptr to avoid dangling pointer
	int* p {new int(10)};
	if (p != nullptr) {
		std::cout << *p << "Cout 1" << std::endl;
	}
	delete p;
	p = nullptr; // set pointer to nullptr after deleting
	if (p != nullptr) {
		std::cout << *p << "Cout 2" << std::endl;
	}

	return 0;
}
