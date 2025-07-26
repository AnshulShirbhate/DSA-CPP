//Pascals traingle is something like this
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 4 10 10 5 1
...............
*/
// To calculate the number at a specified row and column we use the formula N C R


#include <bits/stdc++.h>
using namespace std;

// This function will generate the row required.
vector<int> generateRow(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);

    // This is the main function of this function. It calculates the number at each column of the specified row.
    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++)
    {
        vector<int> row = generateRow(i);
        ans.push_back(row);
    }
    return ans;
}