#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
}

int main(){
    vector<int> nums = {0, 0, 2, 0};
    moveZeroes(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
}