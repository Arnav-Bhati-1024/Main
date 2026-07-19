#include <iostream>
#include <string>
using namespace std;
string longestPalindrome(string s){
    int n=s.length();
    string ls="";
    for (int i = 0; i < n; i++) {          // start index
        for (int j = i + 1; j <= n; j++) { // end index (exclusive)
            string sub = s.substr(i, j - i);
            int l=0,r=sub.length();
            whi
            if (sub[l]==sub[r])
            
        }
    }
}

// check for palindrome till stop 
int main(){
    longestPalindrome("babad");
}