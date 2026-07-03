#include<iostream>
#include<string>
#include<queue>
#include<stack>
using namespace std;

int main(){
    stack<char> l;
    string s; 
    getline(cin, s);
    for (auto c : s) {
        l.push(c);
    }
    while (!l.empty()) {
        cout << l.top();
        l.pop();
    }

}