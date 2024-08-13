#include <bits/stdc++.h> 
using namespace std;

int solve(vector<int> &nums, int index, vector<int> &dp){
    if(index == 0){
        return nums[index];
    }
    if(index < 0){
        return 0;
    }
    if(dp[index] != -1){
        return dp[index];
    }

    int pick = nums[index] + solve(nums, index-2, dp);
    int notpick = 0 + solve(nums, index-1, dp);

    dp[index] = max(pick, notpick);
    return dp[index];
}

// Using tabulation DP
int solveTab(vector<int> &nums, int n){
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    for(int i=1; i<n; i++){
        int incl = dp[i-2] + nums[i];
        int excl = dp[i - 1] + 0;
        dp[i] = max(incl, excl);
    }
    return dp[n-1];
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(nums.size()+1, -1);
    return solve(nums, n-1, dp);
}

int main(){
    vector<int> arr = {4, 6, 1, 2, 10};
    cout<<maximumNonAdjacentSum(arr);
}