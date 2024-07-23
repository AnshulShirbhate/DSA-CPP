// Leetcode 861: https://youtu.be/nNRqRWvV23k?si=hcpCE8_pC0YpkAyP

#include<bits/stdc++.h>
using namespace std;

int matrixScore(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < m; i++)
    {
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                grid[i][j] = 1 - grid[i][j];
            }
        }
    }

    for (int j = 1; j < n; j++)
    {
        int countZero = 0;
        for (int i = 0; i < m; i++)
        {
            if (grid[i][j] == 0)
            {
                countZero++;
            }
        }

        int countOne = m - countZero;
        if (countZero > countOne)
        {
            for (int i = 0; i < m; i++)
            {
                grid[i][j] = 1 - grid[i][j];
            }
        }
    }

    int score = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int value = grid[i][j] * pow(2, n - j - 1);
            score += value;
        }
    }
    return score;
}

int main(){
    vector<vector<int>> grid = {{0,0,1,1},
                                {1,0,1,0},
                                {1,1,0,0}};
    int score = matrixScore(grid);
    cout<<score;
}