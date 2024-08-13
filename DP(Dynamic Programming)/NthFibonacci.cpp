#include<iostream>
#include<vector>
using namespace std;


//Memoization method
// int fib(int n, vector<int> &dp){
//     if(n <= 1){
//         return n;
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n] = fib(n-1, dp) + fib(n-2, dp);
//     return dp[n];
// }

//Tabulation method
int fibb(int n, vector<int> &dp){
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;

    //DP array for memoization;
    // vector<int> dp(n+1, -1);

    //DP array for tabulation method
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    cout<<fibb(n, dp);
}