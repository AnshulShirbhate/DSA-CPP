// Leetcode 2597

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int k, int &ans, int index, vector<int> tempnums)
{
    if (index >= nums.size())
    {
        int temp = 0;
        for (int i = 0; i < tempnums.size(); i++)
        {
            temp = abs(temp + tempnums[i]);
        }
        if (tempnums.size() > 0 && temp != k)
        {
            ans++;
        }
        return;
    }

    solve(nums, k, ans, index + 1, tempnums);

    int element = nums[index];
    tempnums.push_back(element);
    solve(nums, k, ans, index, tempnums);
}

int beautifulSubsets(vector<int> &nums, int k)
{
    int ans = 0;
    vector<int> tempnums;
    solve(nums, k, ans, 0, tempnums);
    return ans;
}

int main(){
    int k=2;
    vector<int> nums = {2,4,6};
    int ans = beautifulSubsets(nums, k);
    cout<<"Answer is: "<<ans;
}