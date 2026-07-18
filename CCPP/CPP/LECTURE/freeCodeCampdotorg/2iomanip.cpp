#include<iostream>
#include<iomanip>
using namespace std;
bool isTrue = true;
bool isFalse = false;
int number =45;
double decimal = 9.1e-31;
int main()
{
    cout << "isTrue: " << isTrue << endl;
    cout << "isFalse: " << isFalse << endl;
    cout << boolalpha; 
    cout << "isTrue: " << isTrue << endl;
    cout << "isFalse: " << isFalse << endl;

    cout << "number: " << number << endl;
    cout << showpos;
    cout << "number: " << number << endl;
    cout << noshowpos;

    cout << "decimal: " << decimal << endl;
    cout << fixed << setprecision(2);
    cout << "decimal: " << decimal << endl;
    cout << fixed << setprecision(4);
    cout << "decimal: " << decimal << endl;
    cout << fixed << setprecision(6);
    cout << "decimal: " << decimal << endl;
    cout << scientific;
    cout << "decimal: " << decimal << endl;
    cout << setprecision(2);
    cout << "decimal: " << decimal << endl;
    
    return 0;
}