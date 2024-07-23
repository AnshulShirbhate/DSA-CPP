#include<iostream>
#include<vector>
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i=0;
        int count1 = 0, count2 = 0;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    count1++;
                    break;
                }
            }
        }
        ans.push_back(count1);
        for(int i=0; i<nums2.size(); i++){
            for(int j=0; j<nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    count2++;
                    break;
                }
            }
        }
        ans.push_back(count2);
        return ans;
}

int main(){
    vector<int> v1 = {4,3,2,3,1};
    vector<int> v2 = {2,2,5,2,3,6};
    vector<int> ans = findIntersectionValues(v1, v2);
    for(int i: ans){
        cout<<i<<" ";
    }
}