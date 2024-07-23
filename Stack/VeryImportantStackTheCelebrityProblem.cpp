// This is a stack question. Solution is given in this video: https://youtu.be/9u2BJfmWNEg?si=SPTRtx0npipYM7oU. Love babbar's C++
// placement series lecture 57.

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Brute force approach O(N) TC
//  int celebrity(vector<vector<int> >& M, int n)
//      {
//          for(int i=0; i<n; i++){
//              int zeroCount=0;
//              int oneCount = 0;
//              for(int rowAndCol = 0; rowAndCol<n; rowAndCol++){
//                  if(M[i][rowAndCol] == 0){
//                      zeroCount++;
//                  }
//                  if(rowAndCol == i)continue;
//                  if(M[rowAndCol][i] == 1)oneCount++;

//             }

//             if(zeroCount == n && oneCount == n-1){
//                 return i;
//             }
//         }
//         return -1;
//     }

// Optimized Appraoch Using Stack O(N)

bool knows(int a, int b, vector<vector<int>> M)
{
    if (M[a][b] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (knows(a, b, M))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }

    int potential = s.top();

    int rowCheck = 0, colCheck = 0;

    for (int i = 0; i < n; i++)
    {
        if (M[potential][i] == 0)
            rowCheck++;
        if (M[i][potential] == 1)
            colCheck++;
    }

    if (rowCheck == n && colCheck == n - 1)
    {
        return potential;
    }
    else
    {
        return -1;
    }
}

int celebrity(vector<vector<int>> &M, int n)

    int main()
{
    vector<vector<int>> M = {{0, 1, 0},
                             {0, 0, 0},
                             {0, 1, 0}};
    int ans = celebrity(M, M.size());
    cout << "The celebrity is present at the index: " << ans;
}