bool solve(vector<int> &arr, int n, int target, vector<vector<int>> &dp){
	if(target == 0){
		return true;
	}
	if(n < 0){
		return false;
	}
	if(dp[n][target] != -1){
		return dp[n][target];
	}

	bool notpick = solve(arr, n-1, target, dp);
	bool pick = false;
	if(target >= arr[n]){
		pick = solve(arr, n-1, target-arr[n], dp);
	}
	dp[n][target] = (pick || notpick);
	return dp[n][target];
}

bool solveTab(vector<int> &arr, int n, int target, vector<vector<bool>> &dp){
    for(int i=0; i<n; i++){
        dp[i][0] = true;
    }
    if(arr[0]<=target)dp[0][arr[0]]=true;

    for(int i=1; i<n; i++){
        for(int tar=1; tar<=target; tar++){
            bool notpick = dp[i-1][tar];
            bool pick = false;
            if(arr[i] <= tar){
                pick = dp[i-1][tar-arr[i]];
            }
            dp[i][tar] = (pick || notpick);
        }
    }
    return dp[n-1][target];
}


bool canPartition(vector<int> &arr, int n)
{
	int sum = 0;
	for(int i:arr)sum+=i;
	if(sum%2 != 0)return false;
	int target = sum/2;
	vector<vector<int>> dp(n, vector<int>(target+1, -1));
	// return solve(arr, n-1, target, dp);
	return solveTab(arr, n, target, dp);
}
 