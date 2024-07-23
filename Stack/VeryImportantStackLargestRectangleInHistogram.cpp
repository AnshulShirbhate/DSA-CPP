//Leetcode problem 84: Largest Rectangle in Histogram 
//Solution video Love babbar c++ placement series: Lecture 56.

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallerElements(vector<int> height, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int currNum = height[i];
        while (s.top() != -1 && currNum <= height[s.top()])
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElements(vector<int> height, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int currNum = height[i];
        while (s.top() != -1 && currNum <= height[s.top()])
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &heights)
{
    int area = INT_MIN;
    int n = heights.size();
    int maxArea = INT_MIN;
    vector<int> next(n);
    vector<int> prev(n);
    next = nextSmallerElements(heights, n);
    prev = prevSmallerElements(heights, n);

    for (int i = 0; i < n; i++)
    {
        int l = heights[i];

        if (next[i] == -1)
        {
            next[i] = n;
        }

        int b = next[i] - prev[i] - 1;
        area = l * b;
        maxArea = max(maxArea, area);
    }

    return maxArea;
}


int main(){
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    int ans = largestRectangleArea(heights);
    cout<<ans;
}