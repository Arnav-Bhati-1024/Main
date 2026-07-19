#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int l{40};

int add_int(int a, int b) {
    int sum = a + b;
    cout << setw(l) << left << "adress of sum inside the function is :" << &sum << endl;
    return sum;
}

string add_string(const string &a, const string &b) {
    string result = a + b;
    cout << setw(l) << left << "adress of result inside the function is :" << &result << endl;
    return result;
}

int main() {
    int x = 5, y = 7;
    string s1 = "Hello, ", s2 = "world!";

    int sum = add_int(x, y);
    string result = add_string(s1, s2);
    cout << "============================================================================" << endl;
    cout << "add_int(" << x << ", " << y << ") = " << sum << '\n';
    cout << "add_string(\"" << s1 << "\", \"" << s2 << "\") = " << result << '\n';
    cout << "============================================================================" << endl;    
    cout << setw(l) << left << "adress of sum outside the function is :" << &sum << endl;
    cout << setw(l) << left << "adress of result outside the function is :" << &result << endl;

    return 0;
}
