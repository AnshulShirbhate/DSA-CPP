#include<bits/stdc++.h>
using namespace std;

long solve(int *arr, int n, int value, vector<vector<long>> &dp){
    if(value <0 || n < 0){
        return 0;
    }
    if(value == 0){
        return 1;
    }
    
    if(dp[n][value] != -1){
        return dp[n][value];
    }
    long notake= solve(arr, n-1, value, dp);
    long take = 0;
    if(arr[n] <= value){
        take = solve(arr, n, value-arr[n], dp);
    }
    return dp[n][value] = take+notake;
}

long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>> dp(n, vector<long>(value+1, -1));
    return solve(denominations, n-1, value, dp);
}