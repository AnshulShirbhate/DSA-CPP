// It is used when there are negative weights in the graph and if we want to detect if there is a negative cycle in the graph.
// It does not work on graph having negative cycle but it can be used to detect negative cycle in the graph.

vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    vector<int> distance(n+1, 1e8);
    distance[src] = 0;

    // N-1 times
    for(int i=1; i<n; i++){
        //Traverse on edge list
        for(int j=0; j<m; j++){
            int u= edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if(distance[u] != 1e9 && ((distance[u] + w) < distance[v])){
                distance[v] = distance[u] + w;
            }
        }
    }
    
    // Check for negative cycle
    bool flag = 0;
    for(int j=0; j<m; j++){
            int u= edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if(distance[u] != 1e9 && ((distance[u] + w) < distance[v])){
                flag=1;
                break;
            }
    }

    if(flag == 0){
        return distance;
    }
    return {};
}