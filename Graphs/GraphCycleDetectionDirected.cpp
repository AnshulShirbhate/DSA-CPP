// Logic is to check if the node is visited and the dfsVisited is also true then cycle is present.

#include<unordered_map>
#include<list>


bool dfs(int node, unordered_map<int, bool > &visited, unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adj){
  visited[node] = true;
  dfsVisited[node] = true;

  for(int i: adj[node]){
    if(!visited[i]){
      bool ans = dfs(i, visited, dfsVisited, adj);
      if(ans){
        return true;
      } 
    }else if(dfsVisited[i]){
      return true;
    }
  }
  dfsVisited[node] = false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  unordered_map<int, list<int>> adj;
  for(int i=0; i<edges.size(); i++){
    int u = edges[i].first;
    int v = edges[i].second;

    adj[u].push_back(v);
  }

  // Call dfs for all components;
  unordered_map<int, bool> visited;
  unordered_map<int, bool> dfsVisited;
  for(int i=0; i<n; i++){
    if(!visited[i]){
      bool cycleFound = dfs(i, visited, dfsVisited, adj);
      if(cycleFound){
        return true;
      }
    }
  }
  return false;
}