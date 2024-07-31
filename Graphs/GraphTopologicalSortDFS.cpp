// In this we just have to use stack and do dfs traversal of the graph. Topoological sort only works on directed acyclic graphs.

#include <bits/stdc++.h> 


void dfs(int node, unordered_map<int, list<int>> &adj, stack<int> &st, vector<bool> &visited){
    visited[node] = true;

    for(int i : adj[node]){
        if(!visited[i]){
            dfs(i, adj, st, visited);
        }
    }
    
    st.push(node);
}


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
    }


    vector<bool> visited(v);
    stack<int> st;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            dfs(i, adj, st, visited);
        }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
    
}