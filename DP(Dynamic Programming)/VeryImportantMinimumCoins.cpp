#include <bits/stdc++.h> 

int solve(int target, int n, vector<int> &denom, vector<vector<int>> &dp){
    if( n == 0){
        if(target%denom[n] == 0)return target/denom[n];
        else return 1e9;
    }
    if(dp[n][target] != -1)return dp[n][target];

    int notpick = 0 + solve(target, n-1, denom, dp);
    int pick = INT_MAX;
    if(target>=denom[n]){
        pick = 1 + solve(target-denom[n], n, denom, dp);
    }
    return dp[n][target] = min(pick, notpick);
}

int solveTab(int target, int n, vector<int> &denom, vector<vector<int>> &dp){
    for(int i=0; i<=target; i++){
        if(i % denom[0] == 0)dp[0][i] = i/denom[0];
        else dp[0][i] = 1e9;
        
    }
    for(int i=1; i<n; i++){
        for(int tar = 0; tar<=target; tar++){
            int notpick = 0 + dp[i-1][tar];
            int pick = INT_MAX;
            if(tar>=denom[n]){
                pick = 1 + dp[i][tar-denom[i]];
            }
            dp[i][tar] = min(pick, notpick);
        }
    }
    int ans = dp[n-1][target];
    if(ans >= 1e9)return -1;
    return ans;
}



int minimumCoins(int p)
{
//   vector<int> denom = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
//   int n = denom.size();
//   vector<vector<int>> dp(n, vector<int>(p+1, -1));
// //   int ans = solve(p, n-1, denom, dp);
//   int ans = solveTab(p, n, denom, dp);
//   return ans;
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

    int n = sizeof(denominations) / sizeof(denominations[0]);

    int result = 0; // Initialize result

    for (int i = 0; i < n; i++) {

        while (p >= denominations[i]) {

            p -= denominations[i];

            result++;

        }

    }


    return result;
}