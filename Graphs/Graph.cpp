#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

// class Graph{
//     public:
//     unordered_map<T, list<T>> adj;

//     void addEdge(T u, T v, bool direction){
//         adj[u].push_back(v);
//         if(direction == 0){
//             adj[v].push_back(u);
//         }
//     }

//     void printAdjList(){
//         for(auto i: adj){
//             cout<<i.first<<" -> ";
//             for(auto j: i.second){
//                 cout<<j<<", ";
//             }
            
//             cout<<endl;
//         }
//     }
// };

class Graph{
    private:
        unordered_map<int, list<int>> adj;
    
    public:
        void addEdge(int u, int v, bool bidirectional){
            if(bidirectional){
                adj[u].push_back(v);
                adj[v].push_back(u);
            }else{
                adj[u].push_back(v);
            }
        }

        void printAdjList(){
            for(auto i: adj){
                cout<<i.first<<" -> ";
                for(auto j: i.second){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
};


int main(){
    int n,m;
    cout<<"Enter the number of Nodes: ";
    cin>>n;
    cout<<"Enter the number of Edges: ";
    cin>>m;
    Graph<int> g;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u, v, 0);
    }

    g.printAdjList();
}