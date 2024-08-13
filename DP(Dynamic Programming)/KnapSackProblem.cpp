int solve(vector<int> &values, vector<int> &weights, int n, int w, vector<vector<int>> &dp){
	if(w == 0 || n < 0){
		return 0;
	}
	if(dp[n][w] != -1){
		return dp[n][w];
	}

	int notpick = 0 + solve(values, weights, n-1, w, dp);
	int pick = 0;
	
	if(w >= weights[n]){
		pick = values[n] + solve(values, weights, n-1, w-weights[n], dp);
	}
	dp[n][w] = max(pick, notpick);
	return dp[n][w];
}

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>> dp(n, vector<int>(w+1, -1));
	return solve(values, weights, n-1, w, dp);
}