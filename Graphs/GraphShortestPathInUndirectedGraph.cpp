// In this we just need to make the parent array and through that backtrack from target to start and store the parents in the array
// and the array will be the shortest path between the target and the start by default because of the BFS.

#include<bits/stdc++.h>

// Backtrack to find path using recursion
void findPath(int s, int t, unordered_map<int, int> &parent, vector<int> &ans){
	if(t == s){
		ans.push_back(t);
		return;
	}
	findPath(s, parent[t], parent, ans);
	ans.push_back(t);
}

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	unordered_map<int, bool> visited;
	unordered_map<int, int> parent;
	queue<int> q;
	q.push(s);
	parent[s] = -1;
	visited[s] = true;

	while(!q.empty()){
		int frontNode = q.front();
		q.pop();

		for(int i: adj[frontNode]){
			if(!visited[i]){
				visited[i] = true;
				parent[i] = frontNode;
				q.push(i);
			}
		}
	}

	//Prepare shortest path
	vector<int> ans;

	//Backtrack to find path using while loop
	// int curr = t;
	// ans.push_back(curr);
	// while(curr != s){
	// 	curr = parent[curr];
	// 	ans.push_back(curr);
	// }

	//Backtrack to find path using recursion
	findPath(s, t, parent, ans);
	
	return ans;
}
