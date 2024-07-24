#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> arr = {7, 8, 9, 1, 2, 3};
    int ans;

    int start = 0, end = arr.size()-1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    ans = mid;

    cout<<"Pivot element is: "<<arr[ans]<<" and it is present at index: "<<ans;
}