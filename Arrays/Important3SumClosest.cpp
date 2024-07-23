#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        int result = nums[0] + nums[1] + nums[nums.size()-1];
        int left, right, sum = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            left = i+1;
            right = nums.size()-1;
        
            while(left<right){
                sum = nums[i] + nums[left] + nums[right];
                if(sum > target){
                    right--;
                }else{
                    left++;
                }
                if(abs(sum-target)<abs(result-target)){
                    result = sum;
                }
            }
        }
        return result;
}

int main(){
    vector<int> nums = {1, 2, -1, -4};
    int target = 1;
    cout<<threeSumClosest(nums, target);
}