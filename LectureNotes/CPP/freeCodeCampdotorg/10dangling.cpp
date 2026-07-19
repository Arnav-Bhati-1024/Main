#include <iostream>
using namespace std;
// Dangling pointer example
int main() {
	// numero uno , we dont care bout bro AKA didnt put a value
	int *bro;
	cout << *bro << "::dangling pointer" << endl; // bro is a dangling pointer

	// numero dos , we cared bout bro but dumped bro AKA put a value then deleted bro
	int *bro2 = new int;
	*bro2 = 30;
	cout << *bro2 << "::before deletion" << endl;
	delete bro2;
	cout << *bro2 << "::after deletion" << endl; // bro2 is a dangling pointer

	// nmero trio , we cant deide best bro AKA we put value into bro3 but also bro 4 , same adress
	int *bro3 = new int;
	*bro3 = 40;
	int *bro4 = bro3; // bro4 is pointing to the same address as bro3
	cout << *bro3 << "::bro3" << endl;
	cout << *bro4 << "::bro4" << endl;
	delete bro3; // deleting bro3 will also delete bro4
	cout << *bro4 << "::after deletion" << endl; // bro4 is a dangling pointer
	// as bro3 and bro4 are pointing to the same address, deleting bro3 will also delete *bro4, making bro4 a dangling pointer.
	// i.e. bro4 will have garbare inside it or may even crash the program if we try to access it.
    return 0;
}