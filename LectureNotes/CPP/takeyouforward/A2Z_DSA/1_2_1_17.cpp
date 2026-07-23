#import<iostream>
using namespace std;
int main(){
    int n=10;
    for (int i{}; i<n ; i++){
        cout << string((n-i-1),' ') ;
        for (int j{}; j<=i; j++){
            cout << char('A'+j);
        }
        for (int j{i-1}; j>=0; j--){
            cout << char('A'+j);
        }
        cout << string((n-i-1),' ') ;
        cout << "\n";
        
    }
}