// O(E log V)
// E = edges
// V = no of vertices


#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int, list<pair<int, int>>> adj;
    for(int i=0; i<vec.size(); i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> distance(vertices, INT_MAX);

    // Declaring set to maintain the shortest distance first in the set
    set<pair<int, int>> st;
    distance[source] = 0;
    st.insert(make_pair(0, source));

    while(!st.empty()){
        //Fetch top record from the set
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int node = top.second;
        // Erasing the pair from the set
        st.erase(st.begin());

        for(auto i: adj[node]){

            if(nodeDistance + i.second < distance[i.first]){
                auto record = st.find(make_pair(distance[i.first], i.first));
                if(record != st.end()){
                    st.erase(record);
                }
                distance[i.first] = nodeDistance + i.second;

                st.insert(make_pair(distance[i.first], i.first));
            }
        }
    }
    return distance;
}
