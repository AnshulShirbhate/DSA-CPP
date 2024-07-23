#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> nums){
    int count = 0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[nums.size()-1] > nums[0]){
        count++;
    }

    if(count>=2){ return false;}
    return true;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    cout<<(check(nums)? "Sorted and Rotated" : "Not Sorted and Rotated");
}