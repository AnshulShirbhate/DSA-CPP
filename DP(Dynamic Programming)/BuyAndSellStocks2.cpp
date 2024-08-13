long solve(long *values, int n, int ind, int buy, vector<vector<long>> &dp){
    if(ind == n){
        return 0;
    }

    if(dp[ind][buy] != -1){
        return dp[ind][buy];
    }

    long profit = 0;
    if(buy){
        profit = max(-values[ind] + solve(values, n, ind+1, 0, dp), 0 + solve(values, n, ind+1, 1, dp));
    } else {
        profit = max(values[ind] + solve(values, n, ind+1, 1, dp), 0 + solve(values, n, ind+1, 0, dp));
    }

    return dp[ind][buy] = profit;
}

long getMaximumProfit(long *values, int n)
{   
    vector<vector<long>> dp(n, vector<long> (2, -1));
    return solve(values, n, 0, 1, dp);
}