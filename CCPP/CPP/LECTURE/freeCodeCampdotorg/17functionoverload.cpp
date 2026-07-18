#include <iostream>
using namespace std;

// Function Overloading Rules:
// 1. Functions must have the SAME name
// 2. Functions must have DIFFERENT parameters:
//    - Different number of parameters
//    - Different type of parameters
//    - Different order of parameters (if types differ)
// 3. Return type alone is NOT enough to overload

// Example 1: Different number of parameters
void greet() {
    cout << "Hello!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

void greet(string name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

// Example 2: Different types of parameters
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Example 3: Different order of parameters
void display(int x, double y) {
    cout << "Int: " << x << ", Double: " << y << endl;
}

void display(double x, int y) {
    cout << "Double: " << x << ", Int: " << y << endl;
}

// Example 4: Mixed parameter types
void printValue(int value) {
    cout << "Integer: " << value << endl;
}

void printValue(double value) {
    cout << "Double: " << value << endl;
}

void printValue(string value) {
    cout << "String: " << value << endl;
}

int main() {
    // Using overloaded greet() function
    greet();
    greet("Alice");
    greet("Bob", 25);
    
    cout << "\n--- Addition Examples ---" << endl;
    // Using overloaded add() function
    cout << "add(5, 10) = " << add(5, 10) << endl;
    cout << "add(3.5, 2.5) = " << add(3.5, 2.5) << endl;
    
    cout << "\n--- Display Examples ---" << endl;
    // Using overloaded display() function
    display(10, 5.5);
    display(3.14, 7);
    
    cout << "\n--- Print Value Examples ---" << endl;
    // Using overloaded printValue() function
    printValue(42);
    printValue(3.14159);
    printValue("Function Overloading");
    
    return 0;
}
