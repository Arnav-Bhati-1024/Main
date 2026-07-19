#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setfill('_');
    // cout << right;
    cout << left;
    for (int i=0;i<100;i++){
        cout << setw(10) << "HAPPY" << "|" << setw(10) << "BIRTHDAY" << "|" << setw(10) << "DANIEL!" << "|" << setw(10) << i << endl;
    }
    return 0;
}