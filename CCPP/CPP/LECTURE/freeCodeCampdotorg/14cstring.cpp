#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout << "=====================================" << endl ;
    // Example 1: Basic C-string declaration and initialization
    char str1[] = "Hello, World!";
    cout << "str1: " << str1 << endl;

    cout << "=====================================" << endl ;
    // Example 2: Character array with size
    char str2[50];
    cout << "Enter a string: ";
    cin >> str2;
    cout << "You entered: " << str2 << endl;

    cout << "=====================================" << endl ;
    // Example 3: String concatenation using strcat
    char name[50] = "John";
    char surname[50] = "Doe";
    strcat(name, " ");
    strcat(name, surname);
    cout << "Full name: " << name << endl;

    cout << "=====================================" << endl ;
    // Example 4: String length using strlen
    char str3[] = "C++ Programming";
    cout << "Length of '" << str3 << "': " << strlen(str3) << endl;
    char* str3_ptr {"123456789"};
    cout << "Length using pointer: " << strlen(str3_ptr) << endl;

    cout << "=====================================" << endl ;
    // Example 5: String copy using strcpy
    char str4[50] = "Original String";
    char str5[50];
    strcpy(str5, str4);
    cout << "str4: " << str4 << endl;
    cout << "str5 (copy): " << str5 << endl;

    cout << "=====================================" << endl ;
    // Example 6: String comparison using strcmp
    char str6[] = "Apple";
    char str7[] = "Apple";
    char str8[] = "Banana";
    
    if (strcmp(str6, str7) == 0) {
        cout << str6 << " and " << str7 << " are equal" << endl;
    }
    
    if (strcmp(str6, str8) != 0) {
        cout << str6 << " and " << str8 << " are not equal" << endl;
    }
    cout << "=====================================" << endl ;
    // Example 7: Partial string copy using strncpy
    char str9[] = "Hello World";
    char str10[10];
    strncpy(str10, str9, 5);
    str10[5] = '\0';  // Null terminate
    cout << "First 5 characters: " << str10 << endl;

    cout << "=====================================" << endl ;
    // Example 8: Finding substring using strstr
    char str11[] = "The quick brown fox jumps over the lazy dog";
    char search[] = "brown";
    char* result = strstr(str11, search);
    if (result != NULL) {
        cout << "Found '" << search << "' at position: " << (result - str11) << endl;
    }
    
    cout << "=====================================" << endl ;
    // Example 9: String conversion and manipulation
    char str12[] = "12345";
    int num = atoi(str12);
    cout << "String to integer: " << num << endl;
    
    cout << "=====================================" << endl ;
    // Example 10: Using getline to input entire line with spaces
    cout << "Enter a complete line: ";
    char str13[100];
    cin.ignore();  // Clear input buffer
    cin.getline(str13, 100);
    cout << "You entered: " << str13 << endl;=
    
    cout << "=====================================" << endl ;
    // Example 11: Finding a character using strchr
    char str14[] = "Find the first occurrence of a character.";
    char ch = 'c';
    char* pos = strchr(str14, ch);
    if (pos != NULL) {
        cout << "Character '" << ch << "' found at position: " << (pos - str14) << "\n";
    } else {
        cout << "Character '" << ch << "' not found." << endl;
    }
    cout << "=====================================" << endl ;

    // Example 11a: Finding all occurrences of a character
    char str15[] = "Find the first occurrence of a character.";
    char ch2 = 'c';
    char* pos2 = str15;
    cout << "All occurrences of '" << ch2 << "':" << endl;
// strchr hops onto the first occurrence of the character and then we can keep searching for the next occurrences by moving the pointer forward.
    while ((pos2 = strchr(pos2, ch2)) != NULL) {
        cout << "Position: " << (pos2 - str15) << endl;
        pos2++; // Move to the next character to find subsequent occurrences
    }
    
    return 0;
}
