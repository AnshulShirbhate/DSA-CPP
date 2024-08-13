//Leetcode 1992

#include<iostream>
#include<vector>
using namespace std;


void dfs(vector<vector<int>>& land, int i, int j, int &c2, int &r2, int n, int m, vector<vector<int>> dp1,vector<vector<int>> dp2 ){
        if(i == n || j == m || i<0 || j<0 || land[i][j] == 0){
            return;
        }
        if(dp1[i][j] && dp2[i][j] != -1){
            c2 = dp1[i][j];
            r2 = dp2[i][j];
            return;
        }
        land[i][j] = 0;
        
        c2 = max(i, c2);
        r2 = max(j, r2);
        dp1[i][j] = c2;
        dp2[i][j] = r2;

        dfs(land, i, j+1, c2, r2, n, m, dp1, dp2);
        dfs(land, i+1, j, c2, r2, n, m, dp1, dp2);
        dfs(land, i, j-1, c2, r2, n, m, dp1, dp2);
        dfs(land, i-1, j, c2, r2, n, m, dp1, dp2);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        int rows=land.size(), cols=land[0].size();
        vector<vector<int>> dp1(rows, vector<int>(cols, -1));
        vector<vector<int>> dp2(rows, vector<int>(cols, -1));
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(land[i][j] == 1){
                    int c1 = i;
                    int r1 = j;
                    int c2 = -1;
                    int r2 = -1;
                    dfs(land, i, j, c2, r2, rows, cols, dp1, dp2);
                    ans.push_back({c1, r1, c2, r2});
                }
            }
        }
        return ans;
    }

int main(){
    vector<vector<int>> land = {{1,0,0},
                                {0,1,1},
                                {0,1,1}};
    vector<vector<int>> ans = findFarmland(land);
    for(vector<int> i: ans){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}