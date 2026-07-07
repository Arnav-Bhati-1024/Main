// #include <iostream>
// #include <string>
// #include <vector>
// #include <unordered_map>
// #include <deque>
// #include <utility>

// using namespace std;
// unordered_map<int, string> warehouse;
// unordered_map<int, string> store_items;
// int LRU = 1;
// int main() {
//     for (int i = 1; i <= 100; ++i) {
//         warehouse[i] = "Item " + to_string(i);
//     }
//     for (int i = 1; i <= 3; ++i) {
//         store_items[i] = warehouse[i];
//     }
    
//     cout << "Welcome to the cloth store!" << endl;
//     char choice='y';
//     while (choice == 'y') {
//         bool flag = false;
//         string s;
//         cout << "Enter the item number you want to buy (1-100): ";
//         getline(cin, s);
//         for (auto i : store_items) {
//             if (i.second == s) {
//                 cout << "You bought :::::::::::::::::::::::::::" << i.second << endl;
//                 flag = true;
//                 break;
//             }
//         }
//         if (!flag) {
//             cout << "Item not found in store. Checking warehouse..." << endl;
//             for (auto i : warehouse) {
//                 if (i.second == s) {
//                     cout << "Item found in warehouse. Adding to store..." << endl;
//                     store_items[i.first] = i.second;
//                     store_items.erase(LRU);
//                     cout << "You bought :::::::::::::::::::::::::::" << i.second << endl;
//                     flag = true;
//                     for (auto j : store_items) {
//                         if (j.first != LRU && j.second != s) {
//                             LRU = j.first;
//                         }
//                     }
//                 }
                
//             }
//         }

//     }
// }






















// QUESTION HI BULLSHIT HIAN 