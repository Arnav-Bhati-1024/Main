#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// after i am out
// slide window

int lengthOfLongestSubstring(string s) {
    int ml = 1 , l = 0 , r = 0;
    int n = s.size();
    string sub = "";
    bool flag = false;
    while (r < n) {
        while (!flag){
            
            sub = s.substr(l, r - l);
            r++;
            if (sub.find(s[r]) != string::npos) {
                flag = true;
            } else {
                ml = max(ml, r - l + 1);
            }
        }
        flag = false;
        l++;
        r=l;
        
    }
    return ml;
}

int main(){
    string s = "abdbadbdcba";
    cout << lengthOfLongestSubstring(s);
}

