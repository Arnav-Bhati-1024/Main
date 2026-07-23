#include<iostream>
int main(){
    int n1=456,n2=14562;
    while (n1!=0 && n2!=0){
        if (n1<n2){
            n2=n2-n1;
        }
        if (n2<n1){
            n1=n1-n2;
        }
        else{
            n1=n1-n2;
        }
    }
    if(n1==0){std::cout << n2;}
    if(n2==0){std::cout << n1;}
}