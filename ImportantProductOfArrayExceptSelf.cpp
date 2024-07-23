// Leetcode 238 : https://youtu.be/G9zKmhybKBM?si=QfMapQ-7igfbWrHA

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int *left = new int[n];
        int *right = new int[n];

        left[0] = 1;
        for(int i=1; i<n; i++){
            left[i] = left[i-1] * nums[i-1];
        }
        // left = {1, 1, 2, 6}

        right[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            right[i] = right[i+1] * nums[i+1];
        }
        //right = {24, 12, 4, 1}

        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = left[i] * right[i];
        }
        //ans = {24, 12, 8, 6}

        return ans;
    }

int main(){
    vector<int> arr = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(arr);
    for(int num: ans){
        cout<<num<<" ";
    }
    return 0;
}