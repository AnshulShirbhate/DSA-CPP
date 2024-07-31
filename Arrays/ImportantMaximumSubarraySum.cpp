#include<iostream>
#include<vector>
using namespace std;


int maxSubArraySum(vector<int>& nums) {
        int sum, largestSum = INT_MIN;
        // First loop is to find start
        for (int i = 0; i < nums.size(); i++) {
            // Second loop is to go till last
            for (int j = i; j < nums.size(); j++) {
                sum = 0;
                // Third loop is to print the elements
                for (int k = i; k <= j; k++) {
                    sum = sum + nums[k];
                }
                if (sum > largestSum) {
                    largestSum = sum;
                }
            }
            
        }
        return largestSum;
}


//Simplest way. Optimal way.
// int maxSubArray(vector<int>& nums) {
//         int currentSum = 0;
//         int largestSum = INT_MIN;

//         for (int i = 0; i < nums.size(); i++) {
            
//             currentSum = max(nums[i], currentSum + nums[i]);

//             largestSum = max(largestSum, currentSum);
//         }

//         return largestSum;
// }


int main()
{
    vector<int> nums = {1,2,3,8,5, -1};
    cout<<maxSubArraySum(nums);
}