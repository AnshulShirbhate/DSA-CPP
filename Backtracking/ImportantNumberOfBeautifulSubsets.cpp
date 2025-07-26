// Leetcode 2597

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, int k, int &ans, int index, unordered_map<int, int> &mp)
{
    if (index >= nums.size())
    {
        ans++;
        return;
    }
    solve(nums, k, ans, index + 1, mp);

    // bool canTake = true;
    // if(mp[nums[index]+k]>0 || mp[nums[index] -k]>0){
    //     canTake = false;
    // }

    if (!mp[nums[index] + k] && !mp[nums[index] - k])
    {
        mp[nums[index]]++;
        solve(nums, k, ans, index + 1, mp);
        mp[nums[index]]--;
    }
}
int beautifulSubsets(vector<int> &nums, int k)
{
    int ans = 0;
    unordered_map<int, int> mp;
    solve(nums, k, ans, 0, mp);
    return ans - 1;
}

int main()
{
    int k = 2;
    vector<int> nums = {2, 4, 6};
    int ans = beautifulSubsets(nums, k);
    cout << "Answer is: " << ans;
}