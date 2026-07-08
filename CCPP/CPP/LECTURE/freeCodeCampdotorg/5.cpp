#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int choice;

    cout << "Enter a number between 1 and 5: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected option 1.\n";
            break;
        case 2:
            cout << "You selected option 2.\n";
            break;
        case 3:
            cout << "You selected option 3.\n";
            break;
        case 4:
            cout << "You selected option 4.\n";
            break;
        case 5:
            cout << "You selected option 5.\n";
            break;
        default:
            cout << "Invalid selection. Please choose a number between 1 and 5.\n";
            break;
    }

    // Ternary Operator: condition ? value_if_true : value_if_false
    // It's a shorthand for if-else statements
    
    int age;
    cin >> age;
    string status = (age >= 18) ? "Adult" : "Minor";
    cout << "\nTernary Operator Example:\n";
    cout << "Age: " << age << "\n";
    cout << "Status: " << status << "\n";

    // Another example: finding max of two numbers
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int max_num = (num1 > num2) ? num1 : num2;
    cout << "Max between " << num1 << " and " << num2 << " is: " << max_num << "\n";

    
    return 0;
}
