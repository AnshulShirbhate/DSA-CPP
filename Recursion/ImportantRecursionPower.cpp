#include <iostream>
using namespace std;

int power(int a, int b){
    if(b == 0){
        return 1;
    }else if(b == 1){
        return a;
    }
    int ans = power(a, b/2);
    if(b & 1){
        return a * ans * ans;
    }else{
        return ans * ans;
    }
}

int main(){
    int a, b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans;
}