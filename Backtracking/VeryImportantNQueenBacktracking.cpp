#include<bits/stdc++.h>
using namespace std;

// Adding the solution to the answers 2d vector
void addSol(vector<vector<int>> &ans, vector<vector<int>> &board, int n){
    vector<int> temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}


// Checking if the queen can be placed on the given coordinates.
bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    int x = row;
    int y = col;
    //check for same row
    while(y>=0){
        if(board[x][y] == 1){
            return false;
        }
        y--;
    }
    x=row;
    y=col;
    //check for diagonal upward
    while(y>=0 && x>=0){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }
    //check for diagonal downward
    x=row;
    y=col;
    while(y>=0 && x<n){
        if(board[x][y] == 1){
            return false;
        }
        x++;
        y--;
    }
    return true;
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n){
    if(col == n){
        addSol(ans, board, n);
        return;
    }
    for(int row=0; row<n; row++){
        if (isSafe(row, col, board, n)) {
            board[row][col] = 1;
            solve(col + 1, ans, board, n);
            // backtrack
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    solve(0, ans, board, n);
    return ans;
}

int main(){
    int n=4;
    vector<vector<int>> ans;
    ans = solveNQueens(n);
    
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<n*n;){
            cout<<ans[i][j]<<" ";
            j++;
            if(j%n == 0){
                cout<<endl;
            }
        }
        cout<<endl;
    }
}