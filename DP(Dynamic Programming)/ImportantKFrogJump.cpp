#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &heights, vector<int> &dp, int k){
    if(n == 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int mini = INT_MAX;
    for(int i=1; i<=k; i++){
        if(n-i >= 0){
            int step = solve(n-i, heights, dp, k) + abs(heights[n] - heights[n-i]);
            mini = min(mini, step);
        }
    }
    dp[n] = mini;
    return dp[n];
} 

int frogJump(int n, vector<int> &heights, int k)
{
    vector<int> dp(n+1, -1);
    return solve(n-1, heights, dp, k);
}

int main(){
    vector<int> arr = {10, 20, 30, 50, 10, 20};
    int ans = frogJump(6, arr, 3);
    cout<<ans;
}