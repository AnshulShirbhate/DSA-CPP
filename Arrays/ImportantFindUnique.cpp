#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int findUnique(vector<int> arr, int size)
{
    //Write your code here
    unordered_map<int, int> mpp;
    for(int i=0; i<size; i++){
        mpp[arr[i]]++;
    }
    for(auto i=mpp.begin(); i != mpp.end(); i++){
        if(i->second == 1){
            return i->first;
        }
    }
    return 0;
}

int findUniqueXORApproach(vector<int> arr, int size){
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 1, 2, 3 ,5, 3, 5};
    int size = arr.size();
    cout<<findUnique(arr, size);
    cout<<findUniqueXORApproach(arr, size);
}
