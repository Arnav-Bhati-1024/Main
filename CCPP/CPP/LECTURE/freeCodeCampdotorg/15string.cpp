#include <iostream>
#include <string>
using namespace std;

/*
 * std::string - A String Class in C++
 * 
 * std::string is a class template that represents a sequence of characters.
 * It's part of the C++ Standard Library (<string> header).
 * 
 * KEY ADVANTAGES over C-style strings (char arrays):
 * 1. Dynamic memory management - automatically resizes
 * 2. Safe - no buffer overflow risks
 * 3. Rich functionality - many built-in methods
 * 4. Can be copied easily without issues
 * 5. Works naturally with operators like +, ==, <, etc.
 */

int main() {
    
    // 1. DECLARATION AND INITIALIZATION
    string str1;                          // Empty string
    string str2 = "Hello";                // C-string literal initialization
    string str3("World");                 // Constructor initialization
    string str4(5, 'A');                  // 5 'A' characters: "AAAAA"
    string str4a("hello world", 5);      // First 5 characters: "hello"
    string str5 = str2;                   // Copy constructor
    string str5a {str2,2,3};            // Substring constructor: from str2, starting at index 2, length 3: "llo" 
    
    cout << "str1: '" << str1 << "'" << endl;  // Empty
    cout << "str2: " << str2 << endl;          // Hello
    cout << "str3: " << str3 << endl;          // World
    cout << "str4: " << str4 << endl;          // AAAAA
    cout << "str4a: " << str4a << endl;        // hello
    cout << "str5: " << str5 << endl;          // Hello
    cout << "str5a: " << str5a << endl;        // Hello
    
    
    // 2. LENGTH AND CAPACITY
    cout << "\nLength and Capacity:" << endl;
    cout << "str2.length(): " << str2.length() << endl;    // 5
    cout << "str2.size(): " << str2.size() << endl;        // 5 (same as length)
    cout << "str2.capacity(): " << str2.capacity() << endl; // allocated space
    cout << "str2.empty(): " << str2.empty() << endl;      // false (0 = false)
    
    
    // 3. ACCESSING CHARACTERS
    cout << "\nAccessing Characters:" << endl;
    cout << "str2[0]: " << str2[0] << endl;           // 'H'
    cout << "str2.at(1): " << str2.at(1) << endl;     // 'e' (bounds checking)
    cout << "str2.front(): " << str2.front() << endl; // 'H' (first char)
    cout << "str2.back(): " << str2.back() << endl;   // 'o' (last char)
    // cout << "str2.at(10)" << endl;  // Throws exception (out of bounds)
    
    
    // 4. STRING CONCATENATION
    cout << "\nConcatenation:" << endl;
    string result = str2 + " " + str3;     // Using + operator
    cout << "str2 + \" \" + str3: " << result << endl; // Hello World
    
    str2 += "!";                           // += operator
    cout << "str2 after +=: " << str2 << endl; // Hello!
    
    str2.append(" How are you?");          // append() method
    cout << "After append: " << str2 << endl;
    
    
    // 5. SUBSTRING AND SEARCH
    cout << "\nSubstring and Search:" << endl;
    string original = "Hello World";
    string sub = original.substr(0, 5);    // Start at 0, length 5: "Hello"
    cout << "substr(0, 5): " << sub << endl;
    
    size_t pos = original.find("World");   // Find returns position (6)
    cout << "find(\"World\"): " << pos << endl;
    
    size_t notfound = original.find("xyz"); // Returns string::npos if not found
    cout << "find(\"xyz\"): " << notfound << " (npos)" << endl;
    
    
    // 6. MODIFICATION
    cout << "\nModification:" << endl;
    string modify = "Hello";
    modify.insert(5, " World");            // Insert at position 5
    cout << "After insert: " << modify << endl; // Hello World
    
    modify.replace(0, 5, "Hi");            // Replace 5 chars starting at 0
    cout << "After replace: " << modify << endl; // Hi World
    
    modify.erase(2, 6);                    // Erase 6 chars starting at position 2
    cout << "After erase: " << modify << endl;  // Hi
    
    
    // 7. COMPARISON
    cout << "\nComparison:" << endl;
    string a = "apple";
    string b = "apple";
    string c = "banana";
    
    cout << "(\"apple\" == \"apple\"): " << (a == b) << endl;  // 1 (true)
    cout << "(\"apple\" == \"banana\"): " << (a == c) << endl; // 0 (false)
    cout << "(\"apple\" < \"banana\"): " << (a < c) << endl;   // 1 (true)
    cout << "a.compare(b): " << a.compare(b) << endl;          // 0 (equal)
    
    
    // 8. CONVERTING TO C-STRING
    cout << "\nConverting to C-String:" << endl;
    string cpp_str = "C++ String";
    const char* c_str = cpp_str.c_str();   // Get const char*
    cout << "c_str: " << c_str << endl;
    
    
    // 9. CLEARING AND RESIZING
    cout << "\nClearing and Resizing:" << endl;
    string temp = "Hello";
    cout << "Before clear: " << temp << " (length: " << temp.length() << ")" << endl;
    temp.clear();
    cout << "After clear: '" << temp << "' (length: " << temp.length() << ")" << endl;
    
    string resize_str = "Hi";
    resize_str.resize(5, 'X');             // Resize to 5, fill with 'X'
    cout << "After resize(5, 'X'): " << resize_str << endl; // HiXXX
    
    
    // 10. ITERATION
    cout << "\nIteration:" << endl;
    string iter_str = "Loop";
    cout << "Characters: ";
    for (char c : iter_str) {
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}
