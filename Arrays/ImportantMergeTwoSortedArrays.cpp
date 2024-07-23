#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=0, size=m+n;
        vector<int> nums3(size);
        while(i<m && j<n){
            if(nums1[i] < nums2[j]){
                nums3[k] = nums1[i];
                i++;
                k++;
            }else{
                nums3[k] = nums2[j];
                j++;
                k++;
            }
        }

        while(i<m){
           nums3[k] = nums1[i];
            i++;
            k++;
        }

        while(j<n){
            nums3[k] = nums2[j];
            j++;
            k++;
        }

        for(int i=0; i<size; i++){
            cout<<nums3[i]<<endl;
        }
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    merge(nums1, nums1.size(), nums2, nums2.size());
}

