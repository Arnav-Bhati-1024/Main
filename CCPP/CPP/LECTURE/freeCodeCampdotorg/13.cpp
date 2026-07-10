#include <iostream>
using namespace std;
int main() {
    int value = 10;
    const int& example = value;

    std::cout << "value = " << value << "\n";
    std::cout << "example = " << example << "\n";
    // try {
    //     example = 20; // This will cause a compilation error because example is a const reference
    //     cout << "referance example after assignment = " << example << "\n";
    // } catch (const std::bad_alloc& e) {
    //     std::cerr << "referance Allocation failed: " << e.what() << "\n";
    // }
    try {
        value = 20; // This will work because value is not a const reference
        cout << "value example after assignment = " << example << "\n";
    } catch (const std::bad_alloc& e) {
        std::cerr << "value Allocation failed: " << e.what() << "\n";
    }
    std::cout << "value = " << value << "\n";
    std::cout << "example = " << example << "\n";

    //const int* value can be changed but the value it points to cannot be changed
    //int * const value cannot be changed but the value it points to can be changed
    //const int* const value cannot be changed and the value it points to cannot be changed


    return 0;
}
