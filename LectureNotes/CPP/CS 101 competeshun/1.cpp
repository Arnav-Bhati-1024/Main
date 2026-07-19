#include<iostream>
using namespace std;
int A1(int hours = 67) {
    cout << "i have " << hours << " hours of free time\n";
    return 0;
}
int main() {
    cout << "1 line" << endl;
    cout << "2 line\n";
    cout << "3 line\n";
    A1(5);
    A1(6);
    return 0;
}