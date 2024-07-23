#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of valid arrays of length
// 'k'
int countValidArrays(int n, int k)
{
    // dp[i][j] represents the number of valid arrays of
    // length i ending with element j
    vector<vector<int> > dp(k + 1, vector<int>(n + 1, 0));

    // Base case: There are 'n' arrays of length 1, each
    // ending with a different number from 1 to 'n'
    for (int j = 1; j <= n; j++) {
        dp[1][j] = 1;
    }

    // Fill the dp array
    for (int len = 2; len <= k; len++) {
        for (int end = 1; end <= n; end++) {
            for (int prev = 1; prev <= n; prev++) {
                if (end % prev == 0) {
                    dp[len][end] += dp[len - 1][prev];
                }
            }
        }
    }

    // Sum up all valid arrays of length 'k'
    int result = 0;
    for (int j = 1; j <= n; j++) {
        result += dp[k][j];
    }

    return result;
}

int main()
{
    // Input values for 'n' and 'k'
    int n = 3;
    int k = 2;

    // Calculate and print the number of different arrays
    cout << countValidArrays(n, k) << endl;

    return 0;
}
