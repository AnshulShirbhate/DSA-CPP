#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> visited, vector<vector<int>> m, int n)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
    {
        return true;
    }
    return false;
}

void solve(vector<vector<int>> m, int n, int x, int y, vector<string> &ans, string path, vector<vector<int>> visited){
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    //Down
    int newx = x+1;
    int newy = y;
    if(isSafe(newx, newy, visited, m, n)){
        path.push_back('D');
        solve(m, n, newx, newy, ans, path, visited);
        path.pop_back();
    }

    //Left
    newx = x;
    newy = y-1;
    if(isSafe(newx, newy, visited, m, n)){
        path.push_back('L');
        solve(m, n, newx, newy, ans, path, visited);
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y+1;
    if(isSafe(newx, newy, visited, m, n)){
        path.push_back('R');
        solve(m, n, newx, newy, ans, path, visited);
        path.pop_back();
    }

    //Up
    newx = x-1;
    newy = y;
    if(isSafe(newx, newy, visited, m, n)){
        path.push_back('U');
        solve(m, n, newx, newy, ans, path, visited);
        path.pop_back();
    }

    visited[x][y] = 0;
}


vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    vector<string> ans;
    int x = 0, y = 0;
    if (m[x][y] == 0)
    {
        return ans;
    }
    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";

    solve(m, n, x, y, ans, path, visited);

    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<vector<int>> m = {{1, 0, 0, 1},
                             {1, 1, 0, 0},
                             {1, 1, 0 ,0},
                             {0, 1, 1, 1}};
    int n = m.size();
    vector<string> ans = findPath(m, n);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}