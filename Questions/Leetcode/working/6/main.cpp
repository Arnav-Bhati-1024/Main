#include<iostream>
#include<string>
#include<vector>
using namespace std;
string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            cout << s << "\n";
            return s;
        }
        vector<vector<char>> fc(numRows, vector<char>(s.length(), ' '));
        int i{},j{};
        bool h{false};
        for (auto c : s){
            fc[i][j]=c;
            if (i==numRows-1){
                h=true;
            }else if (i==0){
                h=false;
            }
            if (h){
                i--;
                j++;
            }else if (!h){
                i++;
            }
        }
        string ret{};
        for (auto a:fc){
            for (auto b:a){
                cout << b << " ";
                if (b!=' '){
                    ret=ret+b;
                }
            }
            cout << "\n";
        }
        return ret;
    }
    /*
    [
    [00,01,02,03,04],
    [10,11,12,13,14],
    [20,21,22,23,24],
    [30,31,32,33,34],
    [40,41,42,43,44],
    ]
    */
int main(){
    cout << convert ("PAYPALISHIRING",4);
}