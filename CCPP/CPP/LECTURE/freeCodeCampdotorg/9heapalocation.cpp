#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int *p = new int;
	*p = 10;
	cout << *p << std::endl;
	delete p;// delete the memory allocated to p
	p = nullptr; // set p to nullptr after deletion
	// Good practice , like shutting the toilet lid while flushing.

	// OR

	int *q = new int;
	*q = 20;
	cout << *q << "::1" << endl;
	delete q;
	cout << *q << "::after deletion" << endl;
	q = nullptr; 
	cout << *q << "::after null" << endl;
	return 0;
}
