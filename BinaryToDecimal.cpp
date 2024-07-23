#include <iostream>
#include <math.h>
using namespace std;

int main(){

    // int n = 1011, digit,i=0, ans=0;
    // while(n!=0){
    //     digit = n%10;
    //     ans = (digit * pow(2,i)) + ans;
    //     n/=10;
    //     i++;
    // }
    // cout<<ans;


    //Second method

    int n, i=0, bit, ans=0;
    cin>>n;

    while(n!=0){
        bit = n%10;
        if(bit == 1){
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;
    }

    cout<<ans;

    return 0;
}