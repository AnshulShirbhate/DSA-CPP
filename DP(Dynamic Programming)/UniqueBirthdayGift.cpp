#include<bits/stdc++.h>
using namespace std;

#define MOD 10000


void solve(int maxVal, int loa, vector<int> temp, vector<vector<int>> &ans, int index, vector<int> &arr, vector<vector<int>>&dp){
    if(index == arr.size() || temp.size() == loa){
        if(temp.size() == loa){
            for(int i=0; i<temp.size()-1; i++){
                if(temp[i+1]%arr[i] != 0){
                    return;
                }
            }
            dp[index][temp.size()]=1;
            ans.push_back(temp);
        }
        return;
    }
    if(dp[index][temp.size()]!=-1){
         return;
    }
    solve(maxVal, loa, temp, ans, index+1, arr,dp);

    temp.push_back(arr[index]);
    solve(maxVal, loa, temp, ans, index, arr,dp);

}

int main(){
    int maxVal, loa;
    cin>>maxVal>>loa;
    vector<vector<int>> ans;
    vector<int> arr;
    for(int i=1; i<=maxVal; i++){
        arr.push_back(i);
    }
    vector<vector<int>>dp(maxVal,vector<int>(maxVal,-1));
    solve(maxVal, loa, {}, ans, 0, arr,dp);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}