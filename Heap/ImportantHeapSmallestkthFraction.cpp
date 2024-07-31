// Whenever questions like this arise having smallest kth and highest kth sentence, think of heap atleast once.
// Leetcode 786 - Kth smallest prime fraction.

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<vector<double>> pq;

        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                double div = (double) arr[i]/arr[j];
                pq.push({div, double(arr[i]), double(arr[j])});
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        vector<double> vec = pq.top();
        vector<int> res;
        res.push_back((int)vec[1]);
        res.push_back((int)vec[2]);
        return res;
    }

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k= 3;
    vector<int> ans = kthSmallestPrimeFraction(arr, k);
}