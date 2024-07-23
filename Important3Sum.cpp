#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);
}

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int left, right, sum;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            left = i+1; right = nums.size()-1;

            //Continue if first element's or fixed elements duplicate is found.
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // Two Sum Algorithm
            while(left<right){
                sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // Increase left if left's duplicate is found.
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }

                    // Decrease right if right's duplicate is found.
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    left++;
                    right--;
                }else if(sum < 0){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return ans;
    }