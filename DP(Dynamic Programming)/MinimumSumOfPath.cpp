#include <bits/stdc++.h> 

int solve(vector<vector<int>> &grid, int m, int n, vector<vector<int>> &dp){
    if(m == 0 && n == 0){
        return grid[m][n];
    }
    if(m < 0 || n < 0){
        return 1e9;
    }

    if(dp[m][n] != -1){
        return dp[m][n];
    }
    int up = grid[m][n] + solve(grid, m-1, n, dp);
    int left = grid[m][n] + solve(grid, m, n-1, dp);
    dp[m][n] = min(up, left);
    return dp[m][n];
}

int minSumPath(vector<vector<int>> &grid) {
    int m = grid.size(), n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return solve(grid, m-1, n-1, dp);
}