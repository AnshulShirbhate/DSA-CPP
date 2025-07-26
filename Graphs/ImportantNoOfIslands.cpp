void dfs(int **arr, int row, int col, int rowSize, int colSize){
   if(row < 0 || row == rowSize || col < 0 || col == colSize || arr[row][col] == 0){
      return;
   }

   arr[row][col] = 0;
   for(int i=-1; i<=1; i++){
      for(int j=-1; j<=1; j++){
         int nrow = row + i;
         int ncol = col + j;
         dfs(arr, nrow, ncol, rowSize, colSize);
      }
   }
}

int getTotalIslands(int** arr, int n, int m)
{
   int cnt=0;
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(arr[i][j] == 1){
            cnt++;
            dfs(arr, i, j, n, m);
         }
      }
   }
   return cnt;
}
