// Just find the longest palindromic subsequence of the string and substract the length of the longest palindromic subsequence with
// the length of the string.

#include <bits/stdc++.h> 
int solve(string &s1, string &s2, int ind1, int ind2, vector<vector<int>> &dp){
    if(ind1<0 || ind2 <0){
        return 0;
    }
    if(dp[ind1][ind2] != -1){
        return dp[ind1][ind2];
    }
    if(s1[ind1] == s2[ind2]){
        return dp[ind1][ind2] = 1+solve(s1, s2, ind1-1, ind2-1, dp);
    }

    return dp[ind1][ind2] = max(solve(s1, s2, ind1-1, ind2, dp), solve(s1, s2, ind1, ind2-1, dp));
}
int minimumInsertions(string &s)
{
	string s2=s;
    reverse(s2.begin(), s2.end());
    int ind1=s.size(), ind2=s.size();
    vector<vector<int>> dp(s.size(), vector<int>(s.size(), -1));
    return s.size()-solve(s, s2, ind1-1, ind2-1, dp);
	
}
