#include <bits/stdc++.h>
#define MOD 1000000007

int count(int n, vector<int> &dp) {
  if (n == 0 || n == 1) {
    return 1;
  }
  if (dp[n] != -1) {
    return dp[n];
  }

  int left = count(n - 1, dp);
  int right = count(n - 2, dp);
  dp[n] = (left + right)%MOD;
  return dp[n];
}

int main() {
  int n;
  cin>>n;
  vector<int> dp(n + 1, -1);
  return count(n, dp);
}