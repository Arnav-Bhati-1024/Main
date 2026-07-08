
#include <iostream>
#include <cstring>

int main() {
	// // Null-terminated char array (C-string)
	// char greeting[] = "Hello, world!"; // size 14 including terminating '\0'
	// std::cout << "greeting: " << greeting << '\n';
	// std::cout << "length (strlen): " << std::strlen(greeting) << '\n';

	// // Modify the char array
	// greeting[7] = 'W'; // change 'w' to 'W'
	// std::cout << "modified: " << greeting << '\n';

	// // Fixed-size char array with explicit size
	// char buffer[10] = "Hi"; // remaining bytes are zero-initialized
	// std::cout << "buffer: " << buffer << " (size: " << sizeof(buffer) << ")" << '\n';

	// // Non-null-terminated raw char array (not a C-string)
	// char raw[3] = {'A', 'B', 'C'};
	// std::cout << "raw chars: ";
	// for (char c : raw) std::cout << c << ' ';
	// std::cout << '\n';


    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Null-terminated
    std::cout << "str1: " << str1 << '\n'; // This will print correctly as it's null-terminated
	return 0;
}
