// First make the 3 arrays weights, mst and parent;  
// Make the src node value in key array 0 and others values as INT_MAX
// Marks the parent of every node as -1 in the parents array
// Initialize every element if mst as false initially.
// find the minimum weighted node which is not already present in the mst array
// After finding the node mark the node in mst as true
// Visit all the adjacent nodes of u and if they are not present in mst then update there distance if the weight from parent to their key
// is lesser.
// Update the adjacent node's parent as u and key[v] as w;
// Now we get the parent array, and the key array through which we can get the answer.


#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    unordered_map<int, list<pair<int, int>>> adj;
    for(int i=0; i<m; i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> key(n+1, INT_MAX);
    vector<bool> mst(n+1, false);
    vector<int> parent(n+1, -1);

    key[1] = 0;
    for(int i=1; i<=n; i++){
        int mini = INT_MAX;
        int u;
        for(int v=1; v<=n; v++){
            if(mst[v] == false && key[v]<mini){
                u = v;
                mini = key[v];
            }
        }
        mst[u] = true;

        for(auto i:adj[u]){
            int v = i.first;
            int w = i.second;
            if(mst[v] == false && w < key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    vector<pair<pair<int, int>, int>> ans;
    for(int i=2; i<=n; i++){
        ans.push_back(make_pair(make_pair(parent[i], i), key[i]));
    }
    return ans;
}