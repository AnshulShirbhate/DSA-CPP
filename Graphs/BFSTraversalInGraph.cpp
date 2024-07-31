// void bfsTraversal(vector<vector<int>> &adj, vector<int> &ans, unordered_map<int, bool> &visited, int node){
//     queue<int> q;
//     q.push(node);
//     visited[node] = 1;

//     while(!q.empty()){
//         int frontNode = q.front();
//         q.pop();

//         ans.push_back(frontNode);
//         for(int i:adj[frontNode]){
//             if(!visited[i]){
//                 q.push(i);
//                 visited[i] = true;
//             }
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;

void bfsTraversal(vector<vector<int>> &adj,vector<int> &ans, unordered_map<int, bool> &visited, int node){
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);
        for(int i: adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> bfsTraversal(vector<vector<int>> &adj){
    unordered_map<int, bool> visited;
    vector<int> ans;
    bfsTraversal(adj, ans, visited, 0);
        
    return ans;
}

int main(){
    vector<int> ans;

    vector<vector<int>> adj = {{1, 3, 5}, {}, {}, {2, 4}, {}, {}};
    ans = bfsTraversal(adj);
    for(int i:ans){
        cout<<i<<" ";
    }
}