#include <bits/stdc++.h> 

bool solve(int n, int k, vector<int> &arr, vector<vector<int>> &dp){
    if(k == 0){
        return true;
    }
    if(n < 0){
        return false;
    }
    if(dp[n][k] != -1){
        return dp[n][k];
    }

    bool notPick = solve(n-1, k, arr, dp);
    bool pick = false;
    if(k>=arr[n]){
        pick = solve(n-1, k-arr[n], arr, dp);
    }
    dp[n][k] = (notPick || pick);
    return dp[n][k];
}

bool solveTab(int n, int k, vector<int> &arr, vector<vector<bool>> &dp){
    for(int i=0; i<n; i++){
        dp[i][0] = true;
    }

    dp[0][arr[0]] = true;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // vector<vector<int>> dp(n+1, vector<int>(k+1, -1));
    // return solve(n-1, k, arr, dp);

    vector<vector<bool>> dp(n+1, vector<bool>(k+1, false));
}