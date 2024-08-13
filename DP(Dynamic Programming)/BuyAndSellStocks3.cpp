#include<bits/stdc++.h>
// int solve(vector<int> &prices, int ind, int n, int buy, vector<vector<vector<int>>> &dp, int cap){
//     if(ind==n || cap == 0){
//         return 0;
//     }
//     if(dp[ind][buy][cap] != -1){
//         return dp[ind][buy][cap];
//     }
//     int profit=0;
//     if(buy){
//         profit = max(-prices[ind] + solve(prices, ind+1, n, 0, dp, cap), 0+solve(prices, ind+1, n, 1, dp, cap)); 
//     } else {
//         profit = max(prices[ind] + solve(prices, ind+1, n, 1, dp, cap-1), 0 + solve(prices, ind+1, n, 0, dp, cap));
//     }

//     return dp[ind][buy][cap] = profit;
// }


int solveTab(vector<int> &prices, int n, vector<vector<vector<int>>> &dp){

    // for(int ind=0; ind<n; ind++){
    //     for(int buy=0; buy<2; buy++){
    //         dp[ind][buy][0] = 0;
    //     }
    // }

    // for(int buy=0; buy<2; buy++){
    //     for(int cap=0; cap<3; cap++){
    //         dp[n][buy][cap] = 0;
    //     }
    // }

    for(int ind=n-1; ind>=0; ind--){
        for(int buy=0; buy<2; buy++){
            for(int cap=1; cap<3; cap++){
                int profit=0;
                if(buy){
                    dp[ind][buy][cap] = max(-prices[ind] + dp[ind+1][0][cap], 0+dp[ind+1][1][cap]); 
                } else {
                    dp[ind][buy][cap] = max(prices[ind] + dp[ind+1][1][cap-1], 0 + dp[ind+1][0][cap]);
                }
            }
        }
    }

    return dp[0][1][2];
}

int maxProfit(vector<int>& prices)
{
    int n = prices.size();
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int> (3, 0)));
    return solveTab(prices, n, dp);
    // return solve(prices, 0, n, 1, dp, 2);
}