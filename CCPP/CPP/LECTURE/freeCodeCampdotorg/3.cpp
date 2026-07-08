#include<iostream>
#include<iomanip>
#include<ios>
#include<limits>
using namespace std;

int main(){

    cout << left << setw(20) << "Size of type: " << sizeof(float) << endl;
    cout << left << setw(20) << "min() type: " << numeric_limits<float>::min() << endl;
    cout << left << setw(20) << "max() type: " << numeric_limits<float>::max() << endl;
    cout << left << setw(20) << "epsilon() type: " << numeric_limits<float>::epsilon() << endl;
    cout << left << setw(20) << "round_error() type: " << numeric_limits<float>::round_error() << endl;
    cout << left << setw(20) << "infinity() type: " << numeric_limits<float>::infinity() << endl;
    cout << left << setw(20) << "quiet_NaN() type: " << numeric_limits<float>::quiet_NaN() << endl;
    // cout << left << setw(20) << "signaling_nan() type: " << numeric_limits<float>::signaling_nan() << endl;
    cout << left << setw(20) << "denorm_min() type: " << numeric_limits<float>::denorm_min() << endl;
}