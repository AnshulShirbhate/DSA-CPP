//Leetcode 1219

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int findSum(vector<vector<int>> &grid, int i, int j, int m, int n)
{
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0)
    {
        return 0;
    }
    int value = grid[i][j];
    grid[i][j] = 0;
    int maxValue = 0;

    for (vector<int> &dir : directions)
    {
        int newx = i + dir[0];
        int newy = j + dir[1];
        maxValue = max(maxValue, findSum(grid, newx, newy, m, n));
    }

    grid[i][j] = value;
    return maxValue + value;
}

int getMaximumGold(vector<vector<int>> &grid)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ans = 0;
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] != 0)
            {
                ans = max(ans, findSum(grid, i, j, m, n));
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> grid = {{0,6,0},
                                {5,8,7},
                                {0,9,0}};
    int ans = getMaximumGold(grid);
    cout<<ans;
}