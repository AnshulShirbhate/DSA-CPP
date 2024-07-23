// https : // youtu.be/ho4gTCr0QSk?si=JsucAJ7MvA5qciZT

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void nextPermutation(vector<int> &nums)
// {
//     int infpt = 0, n = nums.size() - 1;
//     for (int i = n; i > 0; i--)
//     {
//         if (nums[i] > nums[i - 1])
//         {
//             infpt = i;
//             break;
//         }
//     }

//     if (infpt == 0)
//     {
//         sort(nums.begin(), nums.end());
//     }
//     else
//     {
//         int min = INT_MAX;
//         int toSwap = nums[infpt - 1];
//         for (int j = infpt; j <= n; j++)
//         {
//             if (nums[j] - toSwap > 0 && nums[j] - toSwap < min)
//             {
//                 swap(nums[infpt - 1], nums[j]);
//             }
//         }
//         sort(nums.begin() + infpt, nums.end());
//     }
// }

void nextPermutation(vector<int> &nums){
    int infpt = 0;
    int n = nums.size()-1;
    for(int i = n; i>0; i--){
        if(nums[i]>nums[i-1]){
            infpt = i;
            break;
        }
    }

    if (infpt == 0) {
        sort(nums.begin(), nums.end());
    } else {
        int min = INT_MAX;
        int toSwap = nums[infpt - 1];
        for(int j = infpt; j<=n; j++){
            if(nums[j] - toSwap > 0 && nums[j] - toSwap < min){
                swap(nums[j], nums[infpt-1]);
            }
        }

        sort(nums.begin()+infpt, nums.end());
    }

}

int main(){
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}