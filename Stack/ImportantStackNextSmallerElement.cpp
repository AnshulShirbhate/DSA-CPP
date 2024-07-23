//CodeStudio Question Next Smaller Element

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);

//     for(int i=n-1; i>=0; i--){
//         int curr = arr[i];
//         while(s.top()>= curr){
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(curr);
//     }

//     return ans;
// }


vector<int> nextSmallerElement(vector<int> arr, int size){
    stack<int> s;
    s.push(-1);

    vector<int> ans(size);

    for(int i=size-1; i>=0; i--){
        int num = arr[i];
        while(num<=s.top()){
            s.pop();
        }
        ans[i] = s.top();
        s.push(num);
    }

    return ans;
}

int main(){
    vector<int> arr = {3, 1, 6, 8, 10};
    vector<int> ans = nextSmallerElement(arr, arr.size());
    for(auto i: ans){
        cout<<i<<" ";
    }
}

