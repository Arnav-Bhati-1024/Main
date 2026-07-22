#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

    bool cp(const string& s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            ++l;
            --r;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int bb=1;
        string ms(1, s[0]);
        unordered_map<char, vector<int>> frequency;
        for (int i = 0; i < static_cast<int>(s.length()); ++i) {
            frequency[s[i]].push_back(i);
        }
        for (auto i : frequency){
            for (int k = 0; k < i.second.size(); k++) {
                    for (int j = k + 1; j < i.second.size(); j++) {
                        // cout << i.second[k] << "," << i.second[j] << endl;
                        // cout << k<< endl;
                        // cout << j<< endl;
                        int len= i.second.at(j) - i.second.at(k) + 1;
                        // cout << s.substr(i.second.at(k),len) << endl ;
                        string sub= s.substr(i.second.at(k),len) ;
                        // cout << "=" << endl;
                        if (cp(sub)){
                            if (len>bb){
                                bb=len;
                                ms = sub;
                            }
                        }
                    }
                }
            // cout << "" << endl;
        }
        // cout << bb << endl;
        return ms;

    }

// check for palindrome till stop
int main() {
    cout << longestPalindrome("ccc");
    return 0;
}
