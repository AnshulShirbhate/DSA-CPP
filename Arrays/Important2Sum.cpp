// https://youtu.be/nnJkCMRQN4I?si=RYvByoqBfPfDm13a Reference video

/*
    In this we get O(n) time complexity using unordered_map and o(n^2) using the normal brute force approach. To achieve o(n) time
    complexity, we create a hashmap and firstly iterate through the array and then check if the element is present in the map or not
    using the find method. After this we insert the element as the key and it's index as the value in the hashmap as we iterate in the 
    loop.
*/

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            if(mpp.find(target - nums[i]) != mpp.end()){
                return {i, mpp[target-nums[i]]};
            }
            mpp[nums[i]] = i;
        }
        return {};
}

int main(){
    vector<int> nums = {2, 2, 2, 2, 2};
    int target = 4;
    vector<int> ans = twoSum(nums, target);
    for(int i: ans){
        cout<<i<<" ";
    }
}