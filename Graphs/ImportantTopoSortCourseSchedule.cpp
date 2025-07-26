 bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(int i=0; i<prerequisites.size(); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];

            adj[u].push_back(v); 
        }

        vector<int> inDegree(numCourses, 0);
        for(int i=0; i<numCourses; i++){
            for(int j:adj[j]){
                inDegree[j]++;
            }
        }

        queue<int> q;
        for(int i=0; i<numCourses; i++){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }

        vector<int> topo;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            topo.push_back(node);
            for(auto it: adj[node]){
                inDegree[it]--;
                if(inDegree[it] == 0){
                    q.push(it);
                }
            }
        }
        if(topo.size() == numCourses){
            return true;
        } else {
            return false;
        }
    }