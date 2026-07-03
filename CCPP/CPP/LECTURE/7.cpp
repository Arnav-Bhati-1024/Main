#include<iostream>
using namespace std;
// int main() {
//     int L[5];
//     int a=1;
//     cout << sizeof(a) << endl;
//     cout << sizeof(L)[1] << endl;
//     cout << sizeof(L) << endl;
// }

// int main() {
//     int L[5];
//     for (int i=0;i<(sizeof(L)/sizeof(L)[1]);i++) {
//         L[i]=i+1;
//     }
//     cout << "[";
//     for (int i=0;i<(sizeof(L)/sizeof(L)[1])-1;i++) {
//         cout << L[i] << ",";
//     }
//     cout << L[(sizeof(L)/sizeof(L)[1])-1] << "]";
// }

// int main() {
//     int L[20];
//     for (int i=0;i<(sizeof(L)/sizeof(L)[0]);i++) {
//         L[i]=i+1;
//     }
//     cout << "[";
//     for (int i=0;i<(sizeof(L)/sizeof(L)[0])-1;i++) {
//         cout << &L[i] << ",";
//     }
//     cout << &L[(sizeof(L)/sizeof(L)[0])-1] << "]";
// }

// int main() {
//     int L[20];
//     for (int i=0;i<(sizeof(L)/sizeof(L)[0]);i++) {
//         L[i]=i+1;
//     }
//     cout << "[";
//     for (int i=0;i<(sizeof(L)/sizeof(L)[0])-1;i++) {
//         cout << &L[i] << ",";
//     }
//     cout << &L[(sizeof(L)/sizeof(L)[0])-1] << "]";
// }

int main() {
    int L[5]={1,2,3,4,5};
    cout << L;
    cout << L[0];
}