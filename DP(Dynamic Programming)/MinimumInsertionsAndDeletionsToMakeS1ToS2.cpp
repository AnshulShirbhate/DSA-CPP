int solve(string &s1, int m, string &s2, int n, vector<vector<int>> &dp){
    if(m<0 || n< 0){
        return 0;
    }
    if(dp[m][n] != -1){
        return dp[m][n];
    }
    if(s1[m] == s2[n]){
        return dp[m][n] = 1 + solve(s1, m-1, s2, n-1, dp);
    }

    return dp[m][n] = max(solve(s1, m-1, s2, n, dp), solve(s1, m, s2, n-1, dp));
}

int canYouMake(string &s1, string &s2){
    int m=s1.size();
    int n=s2.size();

    vector<vector<int>> dp(m, vector<int> (n, -1));
    int ans = solve(s1, m-1, s2, n-1, dp);
    ans = (m-ans) + (n-ans);
    return ans;
}