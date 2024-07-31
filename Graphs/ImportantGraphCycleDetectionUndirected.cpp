// Main logic is to check of the node is visited and if visited then if the node is the parent. If not then cycle is present.

#include<unordered_map>
#include<list>
#include<queue>

bool isCyclic(int node, unordered_map<int, bool> visited, unordered_map<int, list<int>> adj){
    unordered_map<int, int> parent;
    parent[node] = -1;
    visited[node] = true;
    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        for(auto i: adj[frontNode]){
            if(visited[i] == true && i != parent[frontNode]){
                return true;
            } else if(!visited[i]){
                q.push(i);
                visited[i] = true;
                parent[i] = frontNode;
            }
        }
    }
    return false;
}

// Using DFS
bool isCyclicDFS(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj){
    visited[node] = true;
    for(int i: adj[node]){
        if(!visited[i]){
            bool ans = isCyclicDFS(i, node, visited, adj);
            if(ans){
                return true;
            }
        } else if(i != parent){
            return true;
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, list<int>> adj;
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // TO handle disconnected components 
    unordered_map<int, bool> visited;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCyclic(i, visited, adj);
            if(ans){
                return "Yes";
            }
        }
    }
    return "No";
}
