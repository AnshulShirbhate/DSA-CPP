#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

void bfsTraversal(vector<vector<int>> &adj, vector<int> &ans, int start){
    unordered_map<int, bool> visited;
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for(int i: adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main(){
    vector<vector<int>> adj = {{1, 2, 3}, {}, {}, {4}, {}};
    vector<int> ans;
    bfsTraversal(adj, ans, 0);
    cout<<"The graph will be traversed in this sequence: "<<endl;
    for(int i: ans){
        cout<<i<<" ";
    }
}