#include<bits/stdc++.h>
using namespace std;

int solve(string s, int ind1, string t, int ind2, vector<vector<int>> &dp){
	if(ind1 < 0 || ind2 <0){
		return 0;
	}
	if(dp[ind1][ind2] != -1){
		return dp[ind1][ind2];
	}
	if(s[ind1] == t[ind2]){
		return dp[ind1][ind2] = 1+solve(s, ind1-1, t, ind2-1, dp);
	}

	return dp[ind1][ind2]= max(solve(s, ind1-1, t, ind2, dp), solve(s, ind1, t, ind2-1, dp));
}

int lcs(string s, string t)
{
	int ind1=s.size()-1;
	int ind2=t.size()-1;
	vector<vector<int>> dp(ind1+1, vector<int>(ind2+1, -1));
	int ans = solve(s, ind1, t, ind2, dp); 
	return ans;
}

int main(){
    string s = "adebc";
    string t = "dcadb";
    cout<<lcs(s, t);
}