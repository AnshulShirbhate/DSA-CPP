//Leetcode 523 Very Important: Facebook, Amazon

#include<bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_map<int, int> mp;
        int sum = 0;
        mp[0] = -1;

        for(int i=0; i<size; i++){
            sum += nums[i];
            int remainder = sum % k;

            if(mp.find(remainder) != mp.end()){
                if(i - mp[remainder] >= 2){
                    return true;
                }
            } else {
                mp[remainder] = i;
            }
        }
        return false;
    }

int main(){
    vector<int> nums = {23, 2, 4, 5, 6};
    cout<<checkSubarraySum(nums);
}