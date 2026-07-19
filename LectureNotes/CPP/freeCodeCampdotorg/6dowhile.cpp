#include <iostream>
using namespace std;

int main() {
    int count = 1;

    do {
        cout << "Count is " << count << "\n";
        count++;
    } while (count <= 5000000);
    // The do-while loop executes the block of code at least once before checking the condition.
    // code -> condition -> code -> condition -> code -> condition ...
    // Whereas in a general while loop
    // condition -> code -> condition -> code -> condition -> code ...
    return 0;
}
