#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int lengthOfLongestSubstring(string s) {
        vector<char> l;
        for (char c : s) {
            l.push_back(c);
        }
        sort(l.begin(), l.end());
        l.erase(unique(l.begin(), l.end()), l.end());
        int ml = l.size();
        l.erase(l.begin(), l.end());
        for (int i = ml; i >= 0 ; i--) {
            for (int j = 0; j <= s.size() - i; j++) {
                for (char c : s.substr(j, i)) {
                    l.push_back(c);
                }
                sort(l.begin(), l.end());
                l.erase(unique(l.begin(), l.end()), l.end());
                int ii = l.size();
                l.erase(l.begin(), l.end());

                if (ii == i) {
                    return i;
                }
            }
        }
        return 0;
    }

int main() {
    string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);
    cout << result << endl; // Output: 3

    string s2 = "bbbbb";
    int result2 = lengthOfLongestSubstring(s2);
    cout << result2 << endl; // Output: 1

    string s3 = "pwwkew";
    int result3 = lengthOfLongestSubstring(s3);
    cout << result3 << endl; // Output: 3

    return 0;
}