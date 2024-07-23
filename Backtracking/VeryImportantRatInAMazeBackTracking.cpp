#include <bits/stdc++.h> 
using namespace std;

bool isSafe(int x, int y, vector<vector<bool>> &visited, vector<vector<int>> &arr, int n){
    if(x>=0 && x<n && y>=0 && y<n && visited[x][y] == 0 && arr[x][y] == 1){
        return true;
    }
    return false;
}

void solve(int x, int y, vector < vector < int >> & arr, int n, vector<string> &ans, vector<vector<bool>> &visited, string path){
    if(x==n-1 && y== n-1){
        ans.push_back(path);
        return;
    }

    //4 movements

    //Down
    if(isSafe(x+1, y, visited, arr, n)){
        visited[x][y]=true;
        solve(x+1, y, arr, n, ans, visited, path+'D');
        visited[x][y]=0;
    }

    //Left
    if(isSafe(x, y-1, visited, arr, n)){
        visited[x][y]=true;
        solve(x, y-1, arr, n, ans, visited, path+'L');
        visited[x][y]=0;
    }

    //Right
    if(isSafe(x, y+1, visited, arr, n)){
        visited[x][y]=true;
        solve(x, y+1, arr, n, ans, visited, path+'R');
        visited[x][y]=0;
    }

    //Up
    if(isSafe(x-1, y, visited, arr, n)){
        visited[x][y]=true;
        solve(x-1, y, arr, n, ans, visited, path+'U');
        visited[x][y]=0;
    }
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string> ans;
    if(arr[0][0] == 0){
        return {};
    }
    vector<vector<bool>> visited(n, vector<bool> (n, 0));
    string path="";
    solve(0, 0, arr,n, ans, visited, path);
    return ans;
}

int main(){
    vector<vector<int>> arr = {{1, 0, 0, 0},
                               {1, 1, 0, 0},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};
    vector<string> ans = searchMaze(arr, arr.size());
    for(string i: ans){
        cout<<i<<" ";
    }
}