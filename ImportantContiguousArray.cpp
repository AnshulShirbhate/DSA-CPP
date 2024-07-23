// Leetcode 525 : https://youtu.be/6PAj5F9O4gU?si=hLKJAAz6hBe_yIHw
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMaxLength(vector<int> &nums)
{
    unordered_map<int, int> mpp;
    mpp.insert({0, -1}); // For special case like nums = [0, 1];
    int maxLen = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i] == 0 ? -1 : 1;
        int len;
        if (mpp.find(sum) != mpp.end())
        {
            len = i - mpp[sum];
            maxLen = max(len, maxLen);
        }
        else
        {
            mpp[sum] = i;
        }
    }
    return maxLen;
}

int main(){
    vector<int> nums = {0, 1, 0, 1, 1, 0};
    cout<<findMaxLength(nums);
}