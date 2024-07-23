#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElements(int * height, int n){
        stack<int> s;
        s.push(-1);
        
        vector<int> ans(n);
        
        for(int i=n-1; i>=0; i--){
            int currNum = height[i];
            while(s.top() != -1 && currNum<=height[s.top()]){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElements(int *height, int n){
        stack<int> s;
        s.push(-1);
        
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            int currNum = height[i];
            while(s.top() != -1 && currNum<=height[s.top()]){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
  
  int largestRectangleArea(int *heights, int n) {
        int area = INT_MIN;
        // int n = heights.size();
        int maxArea=INT_MIN;
        vector<int> next(n);
        vector<int> prev(n);
        next = nextSmallerElements(heights, n);
        prev = prevSmallerElements(heights, n);
        
        for(int i=0; i<n; i++){
            int l = heights[i];
                
            if(next[i] == -1)
                next[i] = n;
            
            
            int b = next[i]-prev[i]-1;
            area = l*b;
            maxArea = max(maxArea, area);
        }
        
        return maxArea;
    }

    int maxArea(int M[][3], int n, int m) {
        int area = largestRectangleArea(M[0], m);
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(M[i][j] != 0)
                    M[i][j] = M[i][j] + M[i-1][j];
                else
                    M[i][j] = 0;
                
            area = max(area, largestRectangleArea(M[i], m));
            }
        }    
        return area;
    }

 int main()
{
    int M[3][3] = {{0, 1, 0},
                 {1, 1, 0},
                 {1, 1, 0}};
    int ans = maxArea(M, 3, 3);
    cout << "The largest area of the rectangle is: " << ans;
}