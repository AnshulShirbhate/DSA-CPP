#include<bits/stdc++.h>

int solve(int n, int w, vector<int> &iv, vector<int> &iw, vector<vector<int>> &dp){
    if(w == 0 || n < 0){
        return 0;
    }
    if(dp[n][w] != -1){
        return dp[n][w];
    }
    int nottake = 0 + solve(n-1, w, iv, iw, dp);
    int take = INT_MIN;
    if(iw[n] <= w){
        take = iv[n] + solve(n, w-iw[n], iv, iw, dp);
    }
    return dp[n][w] = max(take, nottake);
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    vector<vector<int>> dp(n, vector<int>(w+1, -1));
    return solve(n-1, w, profit, weight, dp);
}