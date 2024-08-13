#include<bits/stdc++.h>
using namespace std;

int solve(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp){
    if(day == 0){
        int maxi = INT_MIN;
        for(int task=0; task<3; task++){
            if(task != last){
                maxi = max(maxi, points[0][task]);
            }
        }
        return maxi;
    }

    if(dp[day][last] != -1){
        return dp[day][last];
    }

    int maxi = INT_MIN;
    for(int task =0; task<3; task++){
        if(task != last){
            int pointSum = points[day][task] + solve(day-1, task, points, dp);
            maxi = max(maxi, pointSum);
        }
    }
    dp[day][last] = maxi;
    return dp[day][last];
}

// Using Tabulation
int dpTab(vector<vector<int>> &points, int n, vector<vector<int>> &dp){
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][1], max(points[0][0], points[0][2]));

    for(int day=1; day<n; day++){
        for(int last=0; last<4; last++){
            dp[day][last] =0;
            for(int task=0; task<3; task++){
                if(task!=last){
                    int pointSum = points[day][task] + dp[day-1][task];
                    dp[day][last] = max(dp[day][last], pointSum);
                }
            }
        }
    }

    return dp[n-1][3];
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    int ans;
    vector<vector<int>> dp(n, vector<int>(4, -1));
    ans = solve(n-1, 3, points, dp);
    return ans;
}