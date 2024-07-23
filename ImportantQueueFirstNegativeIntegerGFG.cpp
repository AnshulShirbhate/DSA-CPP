// Lecture 61 C++ placement series time 21
#include<iostream>
#include<deque>
#include<vector>
using namespace std;

vector<int> firstNehativeIntegers(vector<int> nums, int k){
    vector<int> ans;
    deque<int> q;
    for(int i=0; i<k; i++){
        if(nums[i]<0){
            q.push_back(i);
        }
    }

    //store ans of first k size window
    if(q.size()>0){
        ans.push_back(nums[q.front()]);
    }else{
        ans.push_back(0);
    }

    //for remaining windows
    for(int i=k; i<nums.size(); i++){
        if(!q.dempty() && i - q.front() >= k){
            q.pop_front();
        }

        if(A[i]<0){
            q.push_back(i);
        }

        if(q.size()>0){
            ans.push_back(nums[q.front()]);
        }else{
            ans.push_back(0);
        }
    }


    return ans;
}

int main(){
    vector<int> nums = {1, 2, -3, 4, -6, -7, 10, 11, 12, 14, -20};
    vector<int> ans = firstNehativeIntegers(nums, 2);
}

