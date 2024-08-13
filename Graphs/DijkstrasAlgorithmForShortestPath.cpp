#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int, list<pair<int, int>>> adj;
    for(int i=0; i<edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> distance(vertices, INT_MAX);
    distance[source] = 0;
    set<pair<int, int>> st;
    st.push(make_pair(0, source));

    while(!st.empty()){
        auto topNode = *(st.begin());
        int node = topNode.second;
        int distance = topNode.first;

        st.erase(st.begin());
        for(auto neighbour: adj[node]){
            if(neighbour.second+distance <= distance[neighbour.first]){
                auto record = st.find(make_pair(distance[neighbour.first], neighbour.first));
                if(record != st.end()){
                    st.erase(record);
                }
                distance[neighbour.first] = distance + neighbour.second;
                st.insert(make_pair(distance[neighbour.first], neighbour.first));
            }
        }
    }

    return distance;


    // vector<int> distance(vertices, INT_MAX);

    // set<pair<int, int>> st;
    // distance[source] = 0;
    // st.push(make_pair(0, source));

    // while(!st.empty()){
    //     // Fetching the top most node with meanimum distance which will be handled by the set
    //     auto top = *(st.begin());
    //     int node = top.second;
    //     int nodeDistance = top.first;

    //     st.erase(st.begin());
    //     for(auto i: adj[node]){
    //         if(nodeDistance + i.second < distance[i.first]){
    //             auto record = st.find(make_pair(distance[i.first], i.first));
    //             if(record != st.end()){
    //                 st.erase(record);
    //             }
    //             distance[i.first] = nodeDistance + i.second;
    //             st.insert(make_pair(distance[i.first], i.first));
    //         }
    //     }
    // }
    // return distance;
}
