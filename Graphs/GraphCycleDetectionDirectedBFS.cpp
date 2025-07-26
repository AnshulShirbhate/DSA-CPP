// Use the topolgical sorting technique by finding the indegree of each node.

#include<bits/stdc++.h>
bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
	unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // Find all indegree
    vector<int> indegree(v);
    for (auto i : adj)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }

    // 0 indegree walo ko push kardo
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    // Do BFS
    int count=0;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        count++;

        for (auto i : adj[front])
        {
            indegree[i]--;
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
    }
    if(count == v){
		return false;
	} else {
		return true;
	}
}
