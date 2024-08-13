#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y, vector<vector<int>> &dp){
	if(x == 0 && y == 0){
		return 1;
	}
	if(x <0 || y < 0){
		return 0;
	}

	if(dp[x][y] != -1){
		return dp[x][y];
	}

	int upCount = solve(x-1, y, dp);
	int leftCount = solve(x, y-1, dp);
	dp[x][y] =  upCount + leftCount;
	return dp[x][y];
}

//Using Tabulation
int solveTab(int x, int y, vector<vector<int>> &dp){
	dp[0][0] = 1;

	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			if(i == 0 && j == 0) continue;
			else{
				int upCount=0;
				int leftCount=0;
				if(i>0)upCount = dp[i-1][j];
				if(j>0)leftCount = dp[i][j-1];
				dp[i][j] = upCount+leftCount;
			}
		} 
	}
	return dp[x-1][y-1];
}

int uniquePaths(int m, int n) {
	vector<vector<int>> dp(m, vector<int>(n, -1));
	// return solve(m-1, n-1, dp);
	return solveTab(m, n, dp);
}

int main(){
	cout<<uniquePaths(3, 3);
}