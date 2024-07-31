#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m){
    int res = 1;

    while(n>0){
        if(n & 1){
            res = (1LL * res * x) %m;
        }
        x = (1LL * x * x) %m;
        n >> 1;
    }
    return res;
}

int main(){ 
    int x = 2, n = 3, m = 2;
    cout<<modularExponentiation(x,n,m);
}