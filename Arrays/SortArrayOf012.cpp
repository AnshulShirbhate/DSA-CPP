// In this we will be using the Dutch National Flag Algorithm. Using this algorithm we can sort array of 0, 1, 2 in one go.

#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr = {1, 2, 0, 2, 1, 1, 1, 0};
    int n=arr.size();
    int low=0, mid=0, high=n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        } else if(arr[mid] == 1){
            mid++;
        } else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for(int i:arr){
        cout<<i<<" ";
    }
}