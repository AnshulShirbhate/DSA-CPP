//Recursion solution. DP memoization not possible

#include<bits/stdc++.h>
using namespace std;

int solve(string &s, int m, string &t, int n, int count){
    if(m == 0 || n == 0){
        return (s[m]==t[n]?count+1:count);
    }
  
    if(s[m] == t[n]){
        count = solve(s, m-1, t, n-1, count+1);
    }
    count = max(count, max(solve(s, m, t, n-1,0), solve(s, m-1, t, n, 0))) ;
    return count;
}

int lcs(string &s, string &t){
    int n = s.size();
    int m = t.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i=0; i<n; i++){
        dp[i][0] = 0;
    }
    for(int j=0; j<m; j++){
        dp[0][j] = 0;
    }
    int ans=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s[i-1] == t[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                ans = max(ans, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }
    return ans;
}

int main(){
    string s1="ansnabcahjklkjh";
    string s2="bcsansnahjkl";
    cout<<lcs(s1, s2);
}