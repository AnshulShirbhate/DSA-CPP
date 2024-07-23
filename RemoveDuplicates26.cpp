#include<iostream>
#include<vector>
#include<unordered_map>
#include<iterator>
using namespace std;
// int removeDuplicates(vector<int>& nums) {
//         int i=1;
//         vector<int> expectedNums;
//         if(nums.size() == 0){
//             return 0;
//         }else if(nums.size() == 1){
//             // expectedNums.push_back(nums[0]);
//             // nums = expectedNums;
//             // return expectedNums.size();
//             return 1;
//         }else{
//             do{
//                 expectedNums.push_back(nums[i-1]);
//                 if(nums[i] == nums[i-1]){
//                     if(i == nums.size()-1){
//                         expectedNums.push_back(nums[i]);
//                     }
//                     expectedNums.pop_back();
//                 }else if(i == nums.size()-1){
//                     expectedNums.push_back(nums[i]);
//                 }
//                 i++;
//             }
//             while(i < nums.size());
//             nums = expectedNums;
//             return expectedNums.size();
//         } 
// }

vector<int> removeDuplicates(vector<int> nums){
    unordered_map<int, int> mpp;
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        mpp[nums[i]]++;
    }
    unordered_map<int, int>::iterator it = mpp.begin();
    for(;it!=mpp.end(); it++){
        if(it->second == 1){
            ans.push_back(it->first);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1, 2, 2, 4, 5, 6, 6, 7, 7, 10};
    vector<int> ans = removeDuplicates(nums);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
