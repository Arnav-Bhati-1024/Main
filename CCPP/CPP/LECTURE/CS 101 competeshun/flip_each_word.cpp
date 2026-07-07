#include<iostream>
#include<string>
using namespace std;




int main() {
    string s;
    getline(cin, s);
    int L[100],j=1;
    L[0] = -1;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            L[j]=i;
            j++;
        }
    }L[j]=s.size();

    for(int i=0;i<j;i++){
        int l=L[i]+1;
        int r=L[i+1]-1;
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }        
    }
    cout<<s;
}